int potPin = 0;
int ledPin = 11;
int val = 0;

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(potPin);
  Serial.println(val);
  analogWrite(ledPin, val);
  delay(100);
}
