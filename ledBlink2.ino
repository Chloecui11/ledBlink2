int ledPin = 13;
int ledPin2 = 14;
int buttonPin = 29; 

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  
  digitalWrite(ledPin, LOW);
  delay(500); 
  digitalWrite(ledPin2, HIGH);  
  digitalWrite(ledPin2, LOW);
  delay(500); 

}
