int potPin = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int val = analogRead(potPin);
  int vol =  val * (5.0 / 1023.0 * 100);

  Serial.print("Temperature: ");
  Serial.print(vol);
  Serial.println("C");

  delay(1000);

  if (vol <= 25) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  } else if (vol >= 26 && vol <= 30) {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
  }
}
