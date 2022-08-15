//action Table tab
byte image01[8] = {
  B00000,
  B01010,
  B11111,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000
};

void actionTable() {
  switch (action) {

    case 0:
      Serial.println("Case 0: x Right + y down");
      //I love arduino with a arm waving man

      switch (actionCounter) {
       case 10:
          wrongAnswer();
          delay(2000);
          lcd.clear();
          dispTextLcd("Missing Letter:", 0, 0);
          dispTextLcd("L", 7, 1);
          delay(1000);
          timerTime = 2000;
          break;

          case 13:
          dispTextLcd("Right answer!", 0, 0);
          dispTextLcd("Well Done!", 0, 1);
          delay(2000);
          lcd.clear();
          dispTextLcd("Last", 6, 0);
          dispTextLcd("Round!", 5, 1);
          delay(5000);
          actionCounter++;
          timerTime = 2000;
          break;
          
          case 16:
          wrongAnswer();
          delay(2000);
          lcd.clear();
          dispTextLcd("Missing Letter:", 0, 0);
          dispTextLcd("U", 7, 1);
          delay(1000);
          timerTime = 2000;
          break;

          case 17:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;
      }
      break;

    case 1:
      Serial.println("Case 1: X center + y down");
      switch (actionCounter) {
        case 10:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;

        case 13:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;

        case 16: 
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;

          case 17:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;
      }
      break;

    case 2:
      Serial.println("Case 2: x left + y down");
      //displaying hello world
      // set the cursor to column 0, line 1
      // (note: line 1 is the second row, since counting begins with 0):
      switch (actionCounter) {
        case 10:
          dispTextLcd("Right answer!", 0, 0);
          dispTextLcd("Well Done!", 0, 1);
          delay(2000);
          lcd.clear();
          dispTextLcd("Next", 6, 0);
          dispTextLcd("Round!", 5, 1);
          delay(5000);
          actionCounter++;
          timerTime = 2000;
         break;

        case 13:
          wrongAnswer();
          delay(2000);
          lcd.clear();
          dispTextLcd("Missing Letter:", 0, 0);
          dispTextLcd("S", 7, 1);
          delay(1000);
          timerTime = 2000;
          break;

          case 16:
          wrongAnswer();
          delay(2000);
          lcd.clear();
          dispTextLcd("Missing Letters:", 0, 0);
          dispTextLcd("A, N, D", 5, 1);
          delay(1000);
          timerTime = 2000;
          break;

          case 17:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;
      }
      break;

    case 3:
      Serial.println("Case 3: x right + y center");
      switch (actionCounter) {
        case 10:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;

        case 13:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;

        case 16: 
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;

       case 17:
         dispTextLcd("Thanks For", 3, 0);
         dispTextLcd("Playing", 5, 1);
         break;
      }
      break;

    case 4:
      Serial.println("Case 4: x center + y center");
      //show a blinking square like it is thinking
      // Turn on the blinking cursor:
      performTable();
      break;

    case 5:
      Serial.println("Case 5: x left + y center");
      //making text zoom accross the screen
      switch (actionCounter) {
        case 10:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;

        case 13:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;

        case 16: 
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;

       case 17:
         actionCounter = 8;
         break;
      }
      break;

    case 6:
      Serial.println("Case 6: x right + y up");
      //blinking cursor telling the audience can type something
      switch (actionCounter) {
        case 10:
          wrongAnswer();
          delay(2000);
          lcd.clear();
          dispTextLcd("Missing Letter:", 0, 0);
          dispTextLcd("A", 7, 1);
          delay(1000);
          timerTime = 2000;
          break;
          
        case 13:
          wrongAnswer();
          delay(2000);
          lcd.clear();
          dispTextLcd("Missing Letter:", 0, 0);
          dispTextLcd("C", 7, 1);
          delay(1000);
          timerTime = 2000;
          break;
          
        case 16:
          wrongAnswer();
          delay(2000);
          lcd.clear();
          dispTextLcd("Missing Letters:", 0, 0);
          dispTextLcd("A, Y", 6, 1);
          delay(1000);
          timerTime = 2000;
          break;

          case 17:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;
      }
      break;

    case 7:
      Serial.println("Case 7: x center + y up");
      //displaying a heart
      switch (actionCounter) {
       case 10:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;

        case 13:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;

        case 16: 
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;

          case 17:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;
      }
      break;

    case 8:
      Serial.println("Case 8: x left + y up");
      // statements
      switch (actionCounter) {
        case 10:
          wrongAnswer();
          delay(2000);
          lcd.clear();
          dispTextLcd("Missing Letter:", 0, 0);
          dispTextLcd("I", 7, 1);
          delay(1000);
          timerTime = 2000;
          break;

          case 13:
          wrongAnswer();
          delay(2000);
          lcd.clear();
          dispTextLcd("Missing Letter:", 0, 0);
          dispTextLcd("R", 7, 1);
          delay(1000);
          timerTime = 2000;
          break;

          case 16:
          dispTextLcd("Right answer!", 0, 0);
          dispTextLcd("Well Done!", 0, 1);
          delay(2000);
          lcd.clear();
          dispTextLcd("Game", 6, 0);
          dispTextLcd("Completed", 3, 1);
          delay(5000);
          actionCounter++;
          timerTime = 2000;
          break;

          case 17:
          dispTextLcd("Not An Option", 2, 0);
          dispTextLcd("Try Again", 4, 1);
          delay(1000);
          timerTime = 2000;
          break;
      }
      break;

  }
}

        
