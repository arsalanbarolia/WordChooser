// fuzzy set tab

void xAxisFuzzy() {
  //Here we will do if statements to change the number value into a catagory
  if (xReading < 300) {
    //the reading is less than 12 inches so we are in touching distance
    fuzzyX = right;
  } else if (xReading < 700) {
    //the reading is less than 4 feet so we are in near distance
    fuzzyX = xCenter;
  } else {
    //the reading is a valid far reading over 250 cm
    fuzzyX = left;
  }
  Serial.print("fuzzy x-axis reading: ");
  Serial.print(fuzzyX);
  displayX();
  Serial.print(") ");
  Serial.println(xString);
}

void yAxisFuzzy() {
  //Here we will do if statements to change the number value into a catagory
  if (yReading < 300) {
    //the reading is less than 12 inches so we are in touching distance
    fuzzyY = up;
  } else if (yReading < 700) {
    //the reading is less than 4 feet so we are in near distance
    fuzzyY = yCenter;
  } else {
    //the reading is a valid far reading over 250 cm
    fuzzyY = down;
  }
  Serial.print("fuzzy y-axis reading: ");
  Serial.print(fuzzyY);
  displayY();
  Serial.print(") ");
  Serial.println(yString);
}

void displayX() {
  switch(fuzzyX) {
    
    case 0:
    //touching distance
    xString = "Right";
    break;

    case 1:
    //near distance
    xString = "X Center";
    break;

    case 2:
    //medium distance
    xString = "Left";
    break;
  }
}

void displayY() {
  switch(fuzzyY) {
    
    case 0:
    //sure distance
    yString = "Down";
    break;

    case 3:
    //kinda sure distance
    yString = "Y Center";
    break;

    case 6:
    //unsure distance
    yString = "Up";
    break;
  }
}
