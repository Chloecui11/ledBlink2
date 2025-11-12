int ledPin = 13;
int ledPin2 = 14;
int buttonPin = 29; 

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
  }
}
