int redled=8;     // set red LED as “output”
int yellowled=7;  // set yellow LED as “output”
int blueled=6;   // set blue LED as “output”
int redpin=5;     // initialize pin for red button
int yellowpin=4;  // initialize pin for yellow button
int bluepin=3;   // initialize pin for blue button
int restpin=2;   // initialize pin for reset button
int red;
int yellow;
int blue;

void setup()
{
  pinMode(redled,OUTPUT);
  pinMode(yellowled,OUTPUT);
  pinMode(blueled,OUTPUT);
  pinMode(redpin,INPUT);
  pinMode(yellowpin,INPUT);
  pinMode(bluepin,INPUT);
}

void loop()  // repeatedly read pins for buttons
{
  red=digitalRead(redpin);
  yellow=digitalRead(yellowpin);
  blue=digitalRead(bluepin);
  
  if(red==LOW)RED_YES();    
  if(yellow==LOW)YELLOW_YES();
  if(blue==LOW)BLUE_YES();
}

void RED_YES()// execute the code until red light is on; end cycle when reset button is pressed
{
  while(digitalRead(restpin)==1)
  {
   digitalWrite(redled,HIGH);
   digitalWrite(blueled,LOW);
   digitalWrite(yellowled,LOW);
  }
  clear_led();
}
void YELLOW_YES()// execute the code until yellow light is on; end cycle when reset button is pressed
{
  while(digitalRead(restpin)==1)
  {
  digitalWrite(redled,LOW);
  digitalWrite(blueled,LOW);
  digitalWrite(yellowled,HIGH);
  }
  clear_led();
}
void BLUE_YES()// execute the code until green light is on; end cycle when reset button is pressed
{
  while(digitalRead(restpin)==1)
  {
  digitalWrite(redled,LOW);
  digitalWrite(blueled,HIGH);
  digitalWrite(yellowled,LOW);
  }
  clear_led();
}
void clear_led()// all LED off
{
  digitalWrite(redled,LOW);
  digitalWrite(blueled,LOW);
  digitalWrite(yellowled,LOW);
}
