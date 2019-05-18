int ledPin = 10; // define digital pin 10.
int blinkTime = 1000;
int waitTime = 3000;
void setup()
{
pinMode(ledPin, OUTPUT);// define pin with LED connected as output.
}
void loop()
{
digitalWrite(ledPin, HIGH); // set the LED on.
delay(blinkTime); // wait for a blinkTime.
digitalWrite(ledPin, LOW); // set the LED off.
delay(waitTime); // wait for a waitTime
}
