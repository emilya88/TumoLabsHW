#define button 2


//
void setup()
{
  Serial.begin(9600);
  pinMode(button, INPUT);
}

void loop()
{
  if (digitalRead(button)==0)
  	Serial.println(0);
  else
  	Serial.println(1);
  
  
/*digitalWrite(button, HIGH);
delay(1000); 
digitalWrite(button, LOW);
delay(1000); */
}