int buzzer = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned char i,j;

  while(1) {
    for(i = 0; i < 70; i++) {
      digitalWrite(buzzer, HIGH);
      delay(1); //ms delay
      digitalWrite(buzzer, LOW);
      delay(1);  
    }

    for(j = 0; j < 100; j++) {
      digitalWrite(buzzer, HIGH);
      digitalWrite(buzzer, LOW);
      delay(2); //ms delay
    }
  }
}
