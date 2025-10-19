int ledPin= 13;
int poten= A0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(poten, INPUT);
}

void loop() {
  int val=analogRead(poten);
  analogWrite(ledPin,val);
  Serial.println(val);
}
