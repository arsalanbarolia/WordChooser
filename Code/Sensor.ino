// sensor tab
void distanceReading() {
  xReading = analogRead(x);
  yReading = analogRead(y);
  Serial.print(xReading);
  Serial.print(" x " );
  Serial.println(yReading);
}
