int servoPin = A0;
int servoAngle;
int pulseWidth;

void servoPulse(int servoPin, int servoAngle) {
    //Converts the Angle to a pulse width value of 500 - 2480
    pulseWidth = (11*servoAngle) + 500;

    digitalWrite(servoPin, HIGH);
    delayMicroseconds(pulseWidth);
    digitalWrite(servoPin, LOW);
    delay(20 - pulseWidth/1000);
  }

void setup() {
  pinMode(servoPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  servoPulse(servoPin,180);
}
