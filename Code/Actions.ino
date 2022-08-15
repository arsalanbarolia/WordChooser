// actions tab
byte image23[8] = {B00000, B01100, B00010, B00010, B00100, B00010, B00010, B01100};
byte image22[8] = {B00000, B00000, B00100, B01010, B10001, B00000, B00000, B00000};
byte image24[8] = {B00000, B00000, B00100, B01010, B10001, B00000, B00000, B00000};
byte image21[8] = {B00001, B00010, B00100, B01000, B01000, B00100, B00010, B00001};
byte image25[8] = {B10000, B01000, B00100, B00010, B00010, B00100, B01000, B10000};
byte image06[8] = {B00000, B00000, B00000, B00000, B00000, B00110, B01001, B01001};
byte image08[8] = {B00000, B00000, B00000, B00000, B00000, B01100, B10010, B10010};
byte image26[8] = {B00000, B11011, B10101, B10001, B01010, B00100, B00000, B00000};

int col[8] = {
  6, 5, 7, 4,
  8, 5, 7, 9
};

int row[8] = {
  1, 1, 1, 1,
  1, 0, 0 ,1
};

int specialChar[8] = {
  0, 1, 2, 3,
  4, 5, 6, 7
};

void bunny() {
  lcd.clear();

  lcd.createChar(0, image23);
  lcd.createChar(1, image22);
  lcd.createChar(2, image24);
  lcd.createChar(3, image21);
  lcd.createChar(4, image25);
  lcd.createChar(5, image06);
  lcd.createChar(6, image08);
  lcd.createChar(7, image26);

 for(int i = 0; i < 8; i++) {
    lcd.setCursor(col[i], row[i]);
    lcd.write(byte(specialChar[i]));
  }
}

byte heart[8] = {
  0b00000, //1st row
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

byte smiley[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b10001,
  0b01110,
  0b00000
};

byte armsDown[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b01010
};

byte armsUp[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b10101,
  0b01110,
  0b00100,
  0b00100,
  0b01010
};

byte frownie[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b00000,
  0b01110,
  0b10001
};

void walkingManPos1(){
  
  lcd.clear();

  byte image01[8] = {B00001, B00001, B00011, B00011, B00011, B00001, B00000, B00001};
  byte image02[8] = {B11111, B11111, B11101, B11101, B11111, B11111, B11111, B11111};
  byte image17[8] = {B00011, B00111, B00111, B00111, B00111, B00001, B00011, B00111};
  byte image18[8] = {B11111, B11111, B11111, B11111, B11111, B11011, B10001, B10001};
  byte image19[8] = {B11000, B11100, B11100, B11100, B11100, B10000, B11000, B11100};
  byte image03[8] = {B00000, B10000, B11000, B00000, B11000, B11100, B11000, B10000};

  lcd.createChar(0, image01);
  lcd.createChar(1, image02);
  lcd.createChar(2, image17);
  lcd.createChar(3, image18);
  lcd.createChar(4, image19);
  lcd.createChar(5, image03);

  lcd.setCursor(0, 0);
  lcd.write(byte(0));
  lcd.setCursor(1, 0);
  lcd.write(byte(1));
  lcd.setCursor(0, 1);
  lcd.write(byte(2));
  lcd.setCursor(1, 1);
  lcd.write(byte(3));
  lcd.setCursor(2, 1);
  lcd.write(byte(4));
  lcd.setCursor(2, 0);
  lcd.write(byte(5));
}

void walkingManPos2(){ 
lcd.clear();

byte image03[8] = {B00000, B00001, B00001, B00011, B00011, B00011, B00000, B00001};
byte image04[8] = {B11111, B11111, B11101, B11101, B11111, B11111, B11111, B11111};
byte image05[8] = {B00000, B11000, B00000, B11000, B11100, B11000, B10000, B00000};
byte image20[8] = {B11111, B11111, B11111, B11111, B11111, B11111, B11111, B11110};
byte image21[8] = {B00000, B00000, B10000, B10000, B10000, B00000, B10000, B00000};
byte image19[8] = {B00011, B00011, B00011, B00011, B00001, B00000, B00000, B00000};

lcd.createChar(0, image03);
lcd.createChar(1, image04);
lcd.createChar(2, image05);
lcd.createChar(3, image20);
lcd.createChar(4, image21);
lcd.createChar(5, image19);

lcd.setCursor(2, 0);
lcd.write(byte(0));
lcd.setCursor(3, 0);
lcd.write(byte(1));
lcd.setCursor(4, 0);
lcd.write(byte(2));
lcd.setCursor(3, 1);
lcd.write(byte(3));
lcd.setCursor(4, 1);
lcd.write(byte(4));
lcd.setCursor(2, 1);
lcd.write(byte(5));
}


void walkingManPos3() {
lcd.clear();

byte image05[8] = {B11111, B11111, B11101, B11101, B11111, B11111, B11111, B11111};
byte image06[8] = {B00000, B11000, B00000, B11000, B11100, B11000, B10000, B00000};
byte image22[8] = {B11110, B11110, B01100, B11100, B11100, B11100, B00000, B00000};
byte image21[8] = {B11111, B11111, B11111, B11111, B11111, B10011, B00000, B00000};
byte image04[8] = {B00000, B00001, B00001, B00011, B00011, B00011, B00000, B00111};
byte image20[8] = {B11111, B11111, B11101, B00011, B00111, B01111, B01111, B00111};

lcd.createChar(0, image05);
lcd.createChar(1, image06);
lcd.createChar(2, image22);
lcd.createChar(3, image21);
lcd.createChar(4, image04);
lcd.createChar(5, image20);

lcd.setCursor(4, 0);
lcd.write(byte(0));
lcd.setCursor(5, 0);
lcd.write(byte(1));
lcd.setCursor(5, 1);
lcd.write(byte(2));
lcd.setCursor(4, 1);
lcd.write(byte(3));
lcd.setCursor(3, 0);
lcd.write(byte(4));
lcd.setCursor(3, 1);
lcd.write(byte(5));
}

void walkingManPos4() {

lcd.clear();

byte image06[8] = {B11111, B11111, B11101, B11101, B11111, B11111, B11111, B11111};
byte image05[8] = {B00000, B00001, B00001, B00011, B00011, B00011, B00000, B00001};
byte image07[8] = {B00000, B11000, B00000, B11000, B11100, B11000, B10000, B00000};
byte image22[8] = {B11111, B11111, B11111, B11111, B11111, B11111, B11111, B11110};
byte image23[8] = {B00000, B00000, B10000, B10000, B10000, B00000, B10000, B00000};
byte image21[8] = {B00011, B00011, B00011, B00011, B00001, B00000, B00000, B00000};

lcd.createChar(0, image06);
lcd.createChar(1, image05);
lcd.createChar(2, image07);
lcd.createChar(3, image22);
lcd.createChar(4, image23);
lcd.createChar(5, image21);

lcd.setCursor(5, 0);
lcd.write(byte(0));
lcd.setCursor(4, 0);
lcd.write(byte(1));
lcd.setCursor(6, 0);
lcd.write(byte(2));
lcd.setCursor(5, 1);
lcd.write(byte(3));
lcd.setCursor(6, 1);
lcd.write(byte(4));
lcd.setCursor(4, 1);
lcd.write(byte(5));
}

void walkingManPos5() {
lcd.clear();

byte image07[8] = {B00000, B11111, B11101, B11101, B11111, B11111, B11111, B11111};
byte image06[8] = {B00000, B00000, B00001, B00001, B00011, B00011, B00011, B00000};
byte image22[8] = {B00001, B00011, B00111, B00111, B00111, B01111, B01100, B00000};
byte image23[8] = {B11111, B11111, B11111, B11111, B11111, B11111, B11110, B11111};
byte image24[8] = {B10000, B11000, B10000, B00000, B00000, B00000, B00000, B00000};
byte image08[8] = {B00000, B00000, B11000, B00000, B11000, B11100, B11000, B10000};

lcd.createChar(0, image07);
lcd.createChar(1, image06);
lcd.createChar(2, image22);
lcd.createChar(3, image23);
lcd.createChar(4, image24);
lcd.createChar(5, image08);

lcd.setCursor(6, 0);
lcd.write(byte(0));
lcd.setCursor(5, 0);
lcd.write(byte(1));
lcd.setCursor(5, 1);
lcd.write(byte(2));
lcd.setCursor(6, 1);
lcd.write(byte(3));
lcd.setCursor(7, 1);
lcd.write(byte(4));
lcd.setCursor(7, 0);
lcd.write(byte(5));
}

void walkingManPos6() {

lcd.clear();

byte image08[8] = {B11111, B11111, B11101, B11101, B11111, B11111, B11111, B11111};
byte image09[8] = {B00000, B11000, B00000, B11000, B11100, B11000, B10000, B00000};
byte image07[8] = {B00000, B00001, B00001, B00011, B00011, B00011, B00000, B00001};
byte image24[8] = {B11111, B11111, B11111, B11111, B11111, B11111, B11111, B11110};
byte image25[8] = {B00000, B00000, B10000, B10000, B10000, B00000, B10000, B00000};
byte image23[8] = {B00011, B00011, B00011, B00011, B00001, B00000, B00000, B00000};

lcd.createChar(0, image08);
lcd.createChar(1, image09);
lcd.createChar(2, image07);
lcd.createChar(3, image24);
lcd.createChar(4, image25);
lcd.createChar(5, image23);

lcd.setCursor(7, 0);
lcd.write(byte(0));
lcd.setCursor(8, 0);
lcd.write(byte(1));
lcd.setCursor(6, 0);
lcd.write(byte(2));
lcd.setCursor(7, 1);
lcd.write(byte(3));
lcd.setCursor(8, 1);
lcd.write(byte(4));
lcd.setCursor(6, 1);
lcd.write(byte(5));
}

void walkingManPos7() {
lcd.clear();

byte image09[8] = {B11111, B11111, B11101, B11101, B11111, B11111, B11111, B11111};
byte image25[8] = {B11111, B11111, B11111, B11111, B11111, B10011, B00000, B00000};
byte image08[8] = {B00000, B00001, B00001, B00011, B00011, B00011, B00000, B00111};
byte image24[8] = {B11111, B11111, B11101, B00011, B00111, B01111, B01111, B00111};
byte image26[8] = {B11110, B11110, B01100, B11100, B11100, B11100, B00000, B00000};
byte image10[8] = {B00000, B11000, B00000, B11000, B11100, B11000, B10000, B00000};

lcd.createChar(0, image09);
lcd.createChar(1, image25);
lcd.createChar(2, image08);
lcd.createChar(3, image24);
lcd.createChar(4, image26);
lcd.createChar(5, image10);

lcd.setCursor(8, 0);
lcd.write(byte(0));
lcd.setCursor(8, 1);
lcd.write(byte(1));
lcd.setCursor(7, 0);
lcd.write(byte(2));
lcd.setCursor(7, 1);
lcd.write(byte(3));
lcd.setCursor(9, 1);
lcd.write(byte(4));
lcd.setCursor(9, 0);
lcd.write(byte(5));
}

void walkingManPos8() {
lcd.clear();

byte image10[8] = {B11111, B11111, B10111, B10111, B11111, B11111, B11111, B11111};
byte image09[8] = {B00000, B00001, B00011, B00000, B00011, B00111, B00011, B00001};
byte image11[8] = {B10000, B10000, B11000, B11000, B11000, B10000, B00000, B10000};
byte image26[8] = {B11111, B11111, B11111, B11111, B11111, B11011, B10001, B10001};
byte image25[8] = {B00011, B00111, B00111, B00111, B00111, B00001, B00011, B00111};
byte image27[8] = {B11000, B11100, B11100, B11100, B11100, B10000, B11000, B11100};

lcd.createChar(0, image10);
lcd.createChar(1, image09);
lcd.createChar(2, image11);
lcd.createChar(3, image26);
lcd.createChar(4, image25);
lcd.createChar(5, image27);

lcd.setCursor(9, 0);
lcd.write(byte(0));
lcd.setCursor(8, 0);
lcd.write(byte(1));
lcd.setCursor(10, 0);
lcd.write(byte(2));
lcd.setCursor(9, 1);
lcd.write(byte(3));
lcd.setCursor(8, 1);
lcd.write(byte(4));
lcd.setCursor(10, 1);
lcd.write(byte(5));
}

void number3() {
lcd.clear();

byte image08[8] = {B00111, B01111, B11111, B11111, B00000, B00000, B00011, B00011};
byte image09[8] = {B11100, B11110, B11111, B11111, B01111, B01111, B11111, B11111};
byte image25[8] = {B11111, B11111, B01111, B01111, B11111, B11111, B11110, B11100};
byte image24[8] = {B00011, B00011, B00000, B00000, B11111, B11111, B01111, B00111};

lcd.createChar(0, image08);
lcd.createChar(1, image09);
lcd.createChar(2, image25);
lcd.createChar(3, image24);

lcd.setCursor(7, 0);
lcd.write(byte(0));
lcd.setCursor(8, 0);
lcd.write(byte(1));
lcd.setCursor(8, 1);
lcd.write(byte(2));
lcd.setCursor(7, 1);
lcd.write(byte(3));
}

void number2() {
lcd.clear();

byte image08[8] = {B00111, B01111, B11111, B11111, B00000, B00000, B00111, B01111};
byte image09[8] = {B11100, B11110, B11111, B11111, B01111, B01111, B11111, B11111};
byte image25[8] = {B11110, B11100, B00000, B00000, B11111, B11111, B11111, B11111};
byte image24[8] = {B11111, B11111, B11100, B11100, B11111, B11111, B11111, B11111};

lcd.createChar(0, image08);
lcd.createChar(1, image09);
lcd.createChar(2, image25);
lcd.createChar(3, image24);

lcd.setCursor(7, 0);
lcd.write(byte(0));
lcd.setCursor(8, 0);
lcd.write(byte(1));
lcd.setCursor(8, 1);
lcd.write(byte(2));
lcd.setCursor(7, 1);
lcd.write(byte(3));

}

void number1() {
lcd.clear();

byte image08[8] = {B00011, B00111, B01111, B11111, B11111, B00011, B00011, B00011};
byte image09[8] = {B11000, B11000, B11000, B11000, B11000, B11000, B11000, B11000};
byte image25[8] = {B11000, B11000, B11000, B11000, B11000, B11111, B11111, B11111};
byte image24[8] = {B00011, B00011, B00011, B00011, B00011, B11111, B11111, B11111};

lcd.createChar(0, image08);
lcd.createChar(1, image09);
lcd.createChar(2, image25);
lcd.createChar(3, image24);

lcd.setCursor(7, 0);
lcd.write(byte(0));
lcd.setCursor(8, 0);
lcd.write(byte(1));
lcd.setCursor(8, 1);
lcd.write(byte(2));
lcd.setCursor(7, 1);
lcd.write(byte(3));
}

void symbolGo() {
lcd.clear();

byte image08[8] = {B11100, B11110, B11111, B01111, B01111, B01111, B01111, B00000};
byte image07[8] = {B00111, B01111, B11111, B11110, B11110, B11110, B11110, B11110};
byte image10[8] = {B11100, B11110, B11111, B11111, B11111, B11111, B01111, B01111};
byte image24[8] = {B11111, B11111, B01111, B01111, B11111, B11111, B11111, B10111};
byte image23[8] = {B11110, B11110, B11110, B11111, B11111, B11111, B01111, B00111};
byte image09[8] = {B00111, B01111, B11111, B11111, B11111, B11111, B11110, B11110};
byte image25[8] = {B11110, B11110, B11111, B11111, B11111, B11111, B01111, B00111};
byte image26[8] = {B01111, B01111, B11111, B11111, B11111, B11111, B11110, B11100};

lcd.createChar(0, image08);
lcd.createChar(1, image07);
lcd.createChar(2, image10);
lcd.createChar(3, image24);
lcd.createChar(4, image23);
lcd.createChar(5, image09);
lcd.createChar(6, image25);
lcd.createChar(7, image26);

lcd.setCursor(7, 0);
lcd.write(byte(0));
lcd.setCursor(6, 0);
lcd.write(byte(1));
lcd.setCursor(9, 0);
lcd.write(byte(2));
lcd.setCursor(7, 1);
lcd.write(byte(3));
lcd.setCursor(6, 1);
lcd.write(byte(4));
lcd.setCursor(8, 0);
lcd.write(byte(5));
lcd.setCursor(8, 1);
lcd.write(byte(6));
lcd.setCursor(9, 1);
lcd.write(byte(7));
}

void dancingMan() {
// Actions Tab
//You can only create 7 characters on the LCD
  // create a new character
  lcd.createChar(0, heart);
  // create a new character
  lcd.createChar(1, smiley);
  // create a new character
  lcd.createChar(2, frownie);
  // create a new character
  lcd.createChar(3, armsDown);
  // create a new character
  lcd.createChar(4, armsUp);
  lcd.createChar(5, surprise);
  lcd.createChar(6,wink);
  lcd.createChar(6,skull);
  
  // set the cursor to the top left
  lcd.setCursor(0, 0);

  // Print a message to the lcd.
  lcd.print("I ");
  lcd.write(byte(0)); // when calling lcd.write() '0' must be cast as a byte
  lcd.print(" Arduino! ");
  lcd.write((byte)1);
  twoStepMotion(4, 1, 3, 4, 500, 6);
}

void wrongAnswer() {
lcd.clear();

byte image08[8] = {B10000, B11000, B11100, B11110, B11111, B11111, B11111, B01111};
byte image09[8] = {B00001, B00011, B00111, B01111, B11111, B11111, B11111, B11110};
byte image25[8] = {B11110, B11111, B11111, B11111, B01111, B00111, B00011, B00001};
byte image24[8] = {B01111, B11111, B11111, B11111, B11110, B11100, B11000, B10000};

lcd.createChar(0, image08);
lcd.createChar(1, image09);
lcd.createChar(2, image25);
lcd.createChar(3, image24);

lcd.setCursor(7, 0);
lcd.write(byte(0));
lcd.setCursor(8, 0);
lcd.write(byte(1));
lcd.setCursor(8, 1);
lcd.write(byte(2));
lcd.setCursor(7, 1);
lcd.write(byte(3));
}

//lcd Functions tab
void exitCheck() {
  sensorTimer(perTime);
}


void sensorTimer(long interval) {
  if (millis() - perPreviousMillis >= interval) {
    perPreviousMillis = millis();
    Serial.println('S');
    distanceReading();
    xAxisFuzzy();
    yAxisFuzzy();
  
    if (fuzzyX != oldFuzzyX || fuzzyY != oldFuzzyY) {
      if (fuzzyX != xCenter && fuzzyY != yCenter) {
        //take the next oldest value to check for noise jump did not happen
        exitFlag = true;
      } else {
        exitFlag = false;
      }
   }
    oldFuzzyX = fuzzyX;
    oldFuzzyY = fuzzyY;
  }
}


void dispTextLcd(String line, int col, int row) {
  lcd.setCursor(col, row);
  // print the number of seconds since reset:
  lcd.print(line);
}

void twoStepMotion(int col, int row, int cell1, int cell2, int wait, int repeats) {
  for (int i = 0; i < repeats; i++) {
    lcd.setCursor(col, row);
    // draw the little man, arms down:
    lcd.write(cell1);
    delay(wait);
    lcd.setCursor(col, row);
    // draw him arms up:
    lcd.write(cell2);
    delay(wait); 
    exitCheck();
    if (exitFlag == true) {
      exitFlag = false;
      break;
    }
  }
}

void lcdDisplayLeft(int start, int stop, int wait) {
  for (int positionCounter = start; positionCounter < stop; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(wait);
    exitCheck();
    if (exitFlag == true) {
      exitFlag = false;
      break;
    }
  }
}

void lcdDisplayRight(int start, int stop, int wait) {
  for (int positionCounter = start; positionCounter < stop; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(wait);
    exitCheck();
    if (exitFlag == true) {
      exitFlag = false;
      break;
    }
  }
}

void clearScreen() {
  lcd.clear();
}

void lcdCursorOff() {
  // Turn off the cursor:
  lcd.noCursor();
}

void lcdCursorOn(int col, int row, int wait, int blinkNum) {
  for (int i = 0; i < blinkNum; i++) {
    lcd.clear();
    lcd.setCursor(col,row);
    // Turn on the cursor:
    lcd.cursor();
    delay(wait);
    lcd.noCursor();
    delay(wait);
    exitCheck();
    if (exitFlag == true) {
      exitFlag = false;
      break;
    }
  }
}

void scrollText(int col, int row, int start, int length, int wait) {
  lcd.setCursor(col, row);
  for (int thisChar = start; thisChar < length; thisChar++) {
    lcd.print(thisChar);
    delay(wait);
    exitCheck();
    if (exitFlag == true) {
      exitFlag = false;
      break;
    }
  }
}

void blinkLcd(int wait) {
  lcd.blink();
  delay(wait);
  
  // Turn off the blinking cursor
  lcd.noBlink();
} 
