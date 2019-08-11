int ledPinA = 5;
int ledPinB = 6;
int buttonPinA = 7;
int buttonPinB = 4;
int buttonStateA = 0;
int buttonStateB = 0;
int brightnessA = 0;
int brightnessB = 255;

void setup() {
  Serial.begin(9600);
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(buttonPinA, INPUT);
  pinMode(buttonPinB, INPUT);
}

void loop() {
  buttonStateA = digitalRead(buttonPinA);
  
  if (buttonStateA == HIGH && brightnessA != 255) {
    brightnessA ++;
  }

  if (buttonStateA == LOW && brightnessA != 0) {
    brightnessA --;
  }

  analogWrite(ledPinB, brightnessA);
  Serial.print(brightnessA);
  Serial.print("   ");

  buttonStateB = digitalRead(buttonPinB);

  if (buttonStateB == HIGH && brightnessB != 0) {
    brightnessB --;
  }

  if (buttonStateB == LOW && brightnessB != 255) {
    brightnessB ++;
  }

  analogWrite(ledPinA, brightnessB);
  Serial.println(brightnessB);
  delay(5);
}
