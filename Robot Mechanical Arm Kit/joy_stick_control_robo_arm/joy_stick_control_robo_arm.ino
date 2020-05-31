#include <Servo.h>
Servo myservo1;  // bottom servo
Servo myservo2;  // right servo
Servo myservo3;  // left servo
Servo myservo4;  // The Claw

int pos1=80, pos2=60, pos3=130, pos4=0; 

const int right_X = A2;
const int right_Y = A5;
const int right_key = 7;

const int left_X = A3;
const int left_Y = A4;
const int left_key = 8;

int x1,y1,z1;
int x2,y2,z2;


void setup()
{  
  myservo1.write(pos1);
  delay(1000);
  myservo2.write(pos2);
  myservo3.write(pos3);
  myservo4.write(pos4);
  delay(1500);

  pinMode(right_key, INPUT);
  pinMode(left_key, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  myservo1.attach(A1);
  myservo2.attach(A0);
  myservo3.attach(6);
  myservo4.attach(9);

  x1 = analogRead(right_X);
  y1 = analogRead(right_Y);
  z1 = analogRead(right_key);

  x2 = analogRead(left_X);
  y2 = analogRead(left_Y);
  z2 = analogRead(left_key);

  delay(5);

  clawControl();
  rotateControl();
  upperArmControl();
  lowerArmControl();
}

void clawControl()
{
  if(x2<50) // if push the left joystick to the right
  {
    pos4 = pos2 - 2;
    Serial.println(pos4);

    myservo4.write(pos4);
    delay(5);
    
    if(pos4<2) {
      pos4 = 2;  
    }
  }

  if(x2>1000)
  {
    pos4 = pos4 + 8;
    Serial.println(pos4);

    myservo4.write(pos4);
    delay(5);

    if(pos4>108)
    {
      pos4 =109;
    }
  }
}

void rotateControl()
{
    if(x1<50)  // if push the right joystick to the right
  {
    pos1=pos1-1;  //pos1 subtracts 1
    myservo1.write(pos1);  // servo 1 operates the motion, the arm turns right.
    delay(5);
    if(pos1<1)   // limit the angle when turn right
    {
      pos1=1;
    }
  }
  if(x1>1000)  // if push the right joystick to the let
  {
    pos1=pos1+1;  //pos1 plus 1
    myservo1.write(pos1);  // arm turns left 
    delay(5);
    if(pos1>180)  // limit the angle when turn left 
    {
      pos1=180;
    }
  }
}

void upperArmControl()
{
    if(y1>1000) // if push the right joystick upward
  {
    pos2=pos2-1;
    myservo2.write(pos2); // the upper arm will lift
    delay(5);
    if(pos2<0)  // limit the lifting angle
    {
      pos2=0;
    }
  }
  if(y1<50)  // if push the right joystick downward
  {
    pos2=pos2+1;  
    myservo2.write(pos2);  // upper arm will go down  
    delay(5);
    if(pos2>180)  // limit the angle when go down
    {
      pos2=180;
    }
  }
}

void lowerArmControl()
{
    if(y2<50)  // if push the left joystick upward 
  {
    pos3=pos3+1;
    myservo3.write(pos3);  // lower arm will stretch out 
    delay(5);
    if(pos3>180)   // limit the stretched angle 
    {
      pos3=180;
    }
  }
  if(y2>1000)  // if push the left joystick downward
  {
    pos3=pos3-1;
    myservo3.write(pos3);  // lower arm will draw back
    delay(5);
    if(pos3<35)  // limit the retracted angle 
    {
      pos3=35;
    }
  }
}
