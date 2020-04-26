#include <Servo.h>
Servo myservo1;  // bottom servo
Servo myservo2;  // right servo
Servo myservo3;  // left servo
Servo myservo4;  // The Claw

int pos1=80, pos2=60, pos3=130, pos4=0; 

void setup()
{
  Serial.begin(9600);
  
  myservo1.attach(A1);
  myservo2.attach(A0);
  myservo3.attach(6);
  myservo4.attach(9);
  
  myservo1.write(pos1);
  myservo2.write(pos2);
  myservo3.write(pos3);
  myservo4.write(pos4);
  
  delay(1500);
}

void loop() 
{
  // bottom Servo1 turn right
  for(pos1;pos1>0;pos1--)
  {
    myservo1.write(pos1);
    Serial.println("Turning right");
    delay(5);
  }
  delay(1000);

  // open the claw Servo4
  for(pos4;pos4<80;pos4++)
  {
    myservo4.write(pos4);
    Serial.println("Opening the Claw");
  }
  delay(1000);

  // right servo rotates to 100 degrees
  for(pos2;pos2>50;pos2--)
  {
    myservo2.write(pos2);
    delay(5);
  }

  // left servo rotates to 5 degrees
  for(pos3;pos3>50;pos3--)
  {
    myservo3.write(pos3);
    delay(5);
  }
  delay(1500);

  // close the claw Servo4
  for(pos4;pos4>0;pos4--)
  {
    myservo4.write(pos4);
    Serial.println("Closing the Claw");
  }
  delay(1000);

  // left servo rotates to100 degrees, rocker arm lifts.
  for(pos3;pos3<120;pos3++)
  {
    myservo3.write(pos3);
    delay(5);
  }
  delay(1000);

  // bottom Servo1 turn to left 
  for(pos1;pos1<180;pos1++)
  {
    myservo1.write(pos1);
    Serial.println("Turning left");
    delay(5);
  }
  delay(1000);

  // Lower the arm 
  for(pos3;pos3>50;pos3--)
  {
    myservo3.write(pos3);
    delay(5);
  }
  delay(1000)
  
  // open the claw Servo4
  for(pos4;pos4<80;pos4++)
  {
    myservo4.write(pos4);
    Serial.println("Opening the Claw");
  }
  delay(1000);

  // lift up the arm 
  for(pos3;pos3<120;pos3++)
  {
    myservo3.write(pos3);
    delay(5);
  }
  delay(1000);

  // close the claw Servo4
  for(pos4;pos4>0;pos4--)
  {
    myservo4.write(pos4);
    Serial.println("Closing the Claw");
  }
  delay(1000);
}
