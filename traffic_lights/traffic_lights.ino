int redLed = 10;
int yellowLed = 7;
int blueLed = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Blue Led
  digitalWrite(blueLed, HIGH);
  delay(5000);
  digitalWrite(blueLed, LOW);

  //Yellow Led
  for(int i=0;i<3;i++)// blinks for 3 times
  {
  delay(500);// wait 0.5 second
  digitalWrite(yellowLed, HIGH);// turn on yellow LED
  delay(500);// wait 0.5 second
  digitalWrite(yellowLed, LOW);// turn off yellow LED
  } 

  //Red Led
  delay(500);// wait 0.5 second
  digitalWrite(redLed, HIGH);// turn on red LED
  delay(5000);// wait 5 second
  digitalWrite(redLed, LOW);// turn off red LED
}
