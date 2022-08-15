/*

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>

//Joystick Sensor Variables
int x = A5;//appoint trigger pin
int y = A4;//appoint echo pin
int button = A3;

int xReading;
int yReading;
int buttonState;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(10, 11, 5, 4, 3, 2);

byte wink[8] = {
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b10001,
  0b01110,
  0b00000
};

byte surprise[8] = {
  0b00000,
  0b01010,
  0b00000,
  0b00100,
  0b01110,
  0b01110,
  0b00100,
  0b00000
};

byte skull[8] = {
  B00000,
  B01110,
  B10101,
  B10101,
  B11111,
  B01110,
  B01110,
  B00000
};

int action = 0;

String stringTime;

int performance[] = {
  0, 1, 2, 3, 4,
  5, 6, 7, 1, 0,
  7, 5, 2, 1, 0,
  7, 0, 1, 6, 8
};

int performanceLength = 20;

int performanceCounter = 0;

//fuzzy set variables
//distance fuzzy set variables
int fuzzyX;
String xString;
//motion fuzzy set variables
int fuzzyY;
String yString;

//x fuzzy words (constants)
int left = 0;
int xCenter = 1;
int right = 2;

//y fuzzy words (constants)
int up = 0; //no motion
int yCenter = 3; //start or stop of motion
int down = 6; //motion

//timer variables

//Sensor reading timer
long previousMillis = 0;
int timerTime = 1000;

//performance interrupt timer
long perPreviousMillis = 0;
//how often we should look at our sensor while performing
int perTime = 3000;
boolean exitFlag = false;
int oldFuzzyDistance;
int oldFuzzyX;
int oldFuzzyY;

//memory variables
int oldAction = 0;
int actionCounter = 0;

void setup() {
  // set up the LCD's number of columns and rows:
  pinMode(button,INPUT);
  lcd.begin(16, 2);
  distanceReading();
  xAxisFuzzy();
  yAxisFuzzy();
  oldFuzzyX = fuzzyX;
  oldFuzzyY = fuzzyY;
}

void loop() {
  distanceReading();
  xAxisFuzzy();
  yAxisFuzzy();
  buttonState = analogRead(button);
  //testing class line of code may need to delete 
  //Your action table may have this delay already
  timer(timerTime);
  //we need a delay for the audience what is going on
  //delay(1000);
}

void timer(long interval) {
  if (millis() - previousMillis >= interval) {
    previousMillis = millis();
    Serial.print("Timer went beep");
    Serial.println(previousMillis);
    action = fuzzyX + fuzzyY;
    lcd.clear();
    actionTable(); 
    
    oldAction = action;
    if (actionCounter >= 18) {
      actionCounter = 0; 
    }
    
  }
}
