void setup() {
 Serial.begin(19200);
 pinMode(A0, INPUT);
}

void loop() {
 int value;
 value = analogRead(A0);
 Serial.println(value);
}
