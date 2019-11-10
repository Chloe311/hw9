int ledPin = 13;
int buttonPin = 4;

void setup() {
 pinMode(ledPin, OUTPUT);
 pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
  digitalWrite(ledPin, HIGH);
}else{
  digitalWrite(ledPin, LOW);
}
}
