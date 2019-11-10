int ledPin = 13;

void setup() {
 Serial.begin(19200);
 pinMode(A0, INPUT);
 //pinMode(ledPin,OUTPUT);
}
void loop() {
 int value;
 value = analogRead(A0);
 Serial.println(value);

//if it is dark, the light is on
if(value < 400){
digitalWrite(ledPin,HIGH);
  }else{
  digitalWrite(ledPin,LOW);
  } 
}
