int potPin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val;
  int data;

  val = analogRead(potPin);
  temperature = (125*val)>>8;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("C");

  delay(1000);
}
