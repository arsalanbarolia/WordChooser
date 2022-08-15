// performAction Tab

void performTable() {
  switch(actionCounter) {
    case 0:
    dispTextLcd("Welcome To", 3, 0);
    delay(2000);
    dispTextLcd("Word Chooser", 2, 1);
    delay(2500);
    walkingManPos1();
    delay(1000);
    walkingManPos2();
    delay(300);
    walkingManPos3();
    delay(300);
    walkingManPos4();
    delay(300);
    walkingManPos5();
    delay(300);
    walkingManPos6();
    delay(300);
    walkingManPos7();
    delay(300);
    walkingManPos8();
    delay(1000);
    dispTextLcd("Horray!", 0, 0);
    delay(2000);
    actionCounter++;
    break;
    
    case 1:
    //instructions
    lcd.print("How to Play:");
    delay(2000);
    actionCounter++;
    break;
    
    case 2:
    dispTextLcd("Create words from the outputted letters", 1, 1);
    lcdDisplayLeft(8, 33, 250);
    delay(500);
    actionCounter++;
    break;

    case 3:
    dispTextLcd("& select the best option", 16, 1);
    lcdDisplayLeft(2, 30, 250);
    delay(500);
    actionCounter++;
    break;

    case 4:
    dispTextLcd("Understand?", 2, 0); 
    dispTextLcd("Press Joystick", 1, 1); 
    if (buttonState < 50) {
      actionCounter++;
    }
    break;

    case 5:
    dispTextLcd("Select options using the Joystick: ", 4, 0);
    lcdDisplayLeft(8, 34, 250);
    delay(1500);
    lcd.clear();
    dispTextLcd("TOP <- for A)", 0, 0); 
    dispTextLcd("BOTTOM <- for B)", 0, 1);
    delay(3000);
    dispTextLcd("TOP -> for C)", 0, 0); 
    dispTextLcd("BOTTOM -> for D)", 0, 1);
    delay(3000);
    actionCounter++;
    break;
    
    case 6:
    dispTextLcd("Here are the", 2, 0);
    delay(1000);
    dispTextLcd("LETTERS", 4, 1);
    delay(3000);
    lcd.clear();
    dispTextLcd("A", 1, 0);
    delay(300);
    dispTextLcd("B", 2, 0);
    delay(300);
    dispTextLcd("C", 3, 0);
    delay(300);
    dispTextLcd("D", 4, 0);
    delay(300);
    dispTextLcd("E", 5, 0);
    delay(300);
    dispTextLcd("F", 6, 0);
    delay(300);
    dispTextLcd("G", 7, 0);
    delay(300);
    dispTextLcd("H", 8, 0);
    delay(300);
    dispTextLcd("I", 9, 0);
    delay(300);
    dispTextLcd("J", 10, 0);
    delay(300);
    dispTextLcd("K", 11, 0);
    delay(300);
    dispTextLcd("L", 12, 0);
    delay(300);
    dispTextLcd("M", 13, 0);
    delay(300);
    dispTextLcd("N", 14, 0);
    delay(300);
    dispTextLcd("O", 2, 1);
    delay(300);
    dispTextLcd("P", 3, 1);
    delay(300);
    dispTextLcd("Q", 4, 1);
    delay(300);
    dispTextLcd("R", 5, 1);
    delay(300);
    dispTextLcd("S", 6, 1);
    delay(300);
    dispTextLcd("T", 7, 1);
    delay(300);
    dispTextLcd("U", 8, 1);
    delay(300);
    dispTextLcd("V", 9, 1);
    delay(300);
    dispTextLcd("W", 10, 1);
    delay(300);
    dispTextLcd("X", 11, 1);
    delay(300);
    dispTextLcd("Y", 12, 1);
    delay(300);
    dispTextLcd("Z", 13, 1);
    delay(5000);    
    actionCounter++;
    break;
        
    case 7:
    dispTextLcd("Ready?", 5, 0); 
    dispTextLcd("Press Joystick", 1, 1); 
    if (buttonState < 50) {
      actionCounter++;
    }
    break;

    case 8:
    dispTextLcd("Random letters will now be generated ", 3, 0);
    lcdDisplayLeft(8, 32, 300);
    delay(1500);
    lcd.clear();
    dispTextLcd("Round", 5, 0);
    dispTextLcd("1", 7, 1);
    delay(5000);
    number3();
    delay(1000);
    number2();
    delay(1000);
    number1();
    delay(1000);
    symbolGo();
    delay(1000);
    lcd.clear();
    dispTextLcd("M", 13, 0);
    delay(500);
    dispTextLcd("T", 7, 1);
    delay(500);
    dispTextLcd("O", 2, 1);
    delay(500);
    dispTextLcd("S", 6, 1);
    delay(500);
    dispTextLcd("D", 4, 0);
    delay(500);
    dispTextLcd("S", 6, 1);
    delay(500);
    dispTextLcd("P", 3, 1);
    delay(500);
    delay(10000);
    lcd.clear();
    dispTextLcd("Time's Up!", 3, 0);
    delay(3000);
    actionCounter++;
    break;

    case 9:
    dispTextLcd("Choose The", 3, 0);
    dispTextLcd("Right Option", 2, 1);
    delay(3000);
    actionCounter++;
    break;

    case 10:
    dispTextLcd("A)MOIST", 0, 0);
    dispTextLcd("B)STOP", 0, 1);
    dispTextLcd("C)TOAST", 9, 0);
    dispTextLcd("D)SOLD", 9, 1);
    timerTime = 800; 
    break;
    
    case 11:
    dispTextLcd("Round", 5, 0);
    dispTextLcd("2", 7, 1);
    delay(5000);
    number3();
    delay(1000);
    number2();
    delay(1000);
    number1();
    delay(1000);
    symbolGo();
    delay(1000);
    lcd.clear();
    dispTextLcd("H", 8, 0);
    delay(500);
    dispTextLcd("P", 3, 1);
    delay(500);
    dispTextLcd("A", 1, 0);
    delay(500);
    dispTextLcd("L", 12, 0);
    delay(500);
    dispTextLcd("Y", 12, 1);
    delay(500);
    dispTextLcd("E", 5, 0);
    delay(500);
    delay(10000);
    lcd.clear();
    dispTextLcd("Time's Up!", 3, 0);
    delay(3000);
    actionCounter++;
    break;

    case 12:
    dispTextLcd("Choose The", 3, 0);
    dispTextLcd("Right Option", 2, 1);
    delay(3000);
    actionCounter++;
    break;

    case 13:
    dispTextLcd("A)PEAR", 0, 0);
    dispTextLcd("B)SLAY", 0, 1);
    dispTextLcd("C)CAPE", 9, 0);
    dispTextLcd("D)HAPPY", 9, 1);
    timerTime = 800;
    break;

    case 14:
    lcd.clear();
    dispTextLcd("Round", 5, 0);
    dispTextLcd("3", 7, 1);
    delay(5000);
    number3();
    delay(1000);
    number2();
    delay(1000);
    number1();
    delay(1000);
    symbolGo();
    delay(1000);
    lcd.clear();
    dispTextLcd("T", 7, 1);
    delay(500);
    dispTextLcd("L", 12, 0);
    delay(500);
    dispTextLcd("S", 6, 1);
    delay(500);
    dispTextLcd("I", 9, 0);
    delay(500);
    dispTextLcd("O", 2, 1);
    delay(500);
    dispTextLcd("E", 5, 0);
    delay(500);
    delay(10000);
    lcd.clear();
    dispTextLcd("Time's Up!", 3, 0);
    delay(3000);
    actionCounter++;
    break;

    case 15:
    dispTextLcd("Choose The", 3, 0);
    dispTextLcd("Right Option", 2, 1);
    delay(3000);
    actionCounter++;
    break;

    case 16:
    dispTextLcd("A)SLOT", 0, 0);
    dispTextLcd("B)SAND", 0, 1);
    dispTextLcd("C)STAY", 9, 0); 
    dispTextLcd("D)SOUL", 9, 1);
    timerTime = 800;
    break;

    case 17:
    dispTextLcd("LEFT to Restart", 0, 0);
    dispTextLcd("RIGHT to Exit", 0, 1);
    delay(3000);
    timerTime = 800;
    break;
  }
}
