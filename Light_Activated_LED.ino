const int ldrPin = A0;
const int ledPin = 10;


void setup() {
  pinMode(ledPin, OUTPUT);
  
Serial.begin(9600);

}

void loop() {
  
int ldrValue = analogRead(ldrPin);

Serial.println(ldrValue);
 if(ldrValue < 74)
 {
  digitalWrite(ledPin, HIGH);
 }
else
{
  digitalWrite(ledPin, LOW);
}
delay(500);
}
