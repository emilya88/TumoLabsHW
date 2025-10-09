int ledPin=A0;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);

}

void loop() {
  Serial.println("start again");
  for(int i=0; i<4095;i+=10){
    analogWrite(ledPin,i);
      Serial.println(i);
      delay(100);
  }
  Serial.println("done");
}
