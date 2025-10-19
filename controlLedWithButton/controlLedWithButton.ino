#define ledPin 3
#define buttonPin 2

int ledState = LOW;
int buttonState;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    ledState = HIGH;
  } else {
    ledState = LOW;
  }

  digitalWrite(ledPin, ledState); 
}