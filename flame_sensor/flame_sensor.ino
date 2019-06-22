int flame = 0;
int beep = 9;
int val = 0;
int fireDetectLevel = 12; //usually it is 600 , but my lighter can go only with 12

void setup() {
  pinMode(beep,OUTPUT);
  pinMode(flame,INPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(flame);
  Serial.println(val);

  if(val >= fireDetectLevel) 
  {
    digitalWrite(beep,HIGH);
  } else {
    digitalWrite(beep,LOW);
  }

  delay(500);
}
