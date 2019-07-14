int potPin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val;
  int temperature;

  val = analogRead(potPin);
  temperature = (125*val)>>8;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("C");

  delay(1000);
}
