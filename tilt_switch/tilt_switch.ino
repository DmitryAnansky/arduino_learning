int activePin = 8;
int readPin = 5;

void setup() {
  pinMode(activePin, OUTPUT);
}

void loop() {
  int i;

  while(1) {
    i = analogRead(readPin);

    if(i > 512) {
      digitalWrite(activePin, LOW);
    } else {
      digitalWrite(activePin, HIGH);
    }
  }
}
