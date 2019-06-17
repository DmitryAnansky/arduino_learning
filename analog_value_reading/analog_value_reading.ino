int potPin = 0;
int val = 0;

void setup() {
  Serial.begin(9600); //set baud rate at 9600 same as Serial Monitor settings
}

void loop() {
  delay(1000);
  val = analogRead(potPin);
  Serial.println(val);
}
