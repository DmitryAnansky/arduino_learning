const int right_X = A2; // define the right X pin to A2 
const int right_Y = A5; // define the right Y pin to A5 
const int right_key = 7; //define the right key pin to 7（that is the value Z）

const int left_X = A3; //define the left X pin to A3
const int left_Y = A4;  // define the left Y pin to A4
const int left_key = 8; //define the left key pin to 8（that is the value Z）

void setup() {
  pinMode(right_key, INPUT);   // set the right/left key to INPUT 
  pinMode(left_key, INPUT);
  Serial.begin(9600); //  set the baud rate to 9600
}

void loop() {
  int x1,y1,z1;
  int x2,y2,z2;

  x1 = analogRead(right_X);
  y1 = analogRead(right_Y);
  z1 = digitalRead(right_key);

  x2 = analogRead(left_X);
  y2 = analogRead(left_Y);
  z2 = digitalRead(left_key);

  Serial.print("right_X = ");
  Serial.println(x1 ,DEC);
  
  Serial.print("right_Y = ");
  Serial.println(y1 ,DEC);
  delay(200);
  
  Serial.print("right_key click = ");
  Serial.println(z1);
  Serial.println(z1 ,DEC);
  Serial.println("**********right click**********");
  delay(200);

  
  Serial.print("left_X = ");
  Serial.println(x2 ,DEC);
  delay(200);

  Serial.print("left_Y = ");
  Serial.println(y2 ,DEC);
  delay(200);

  Serial.print("left_key click = ");
  Serial.println(z2 ,DEC);
  Serial.println("*********left click***********");
  delay(200);
}
