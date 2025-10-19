
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int currentvalue = analogRead(A0);
  float voltage= currentvalue*(5.0/1023.0);
  Serial.print("ADC reading: ");
  Serial.print(currentvalue);
  Serial.print("\n");
  Serial.print("Analog voltage: ");
  Serial.print(voltage);
  Serial.print("\n");
  delay(5);
  
}