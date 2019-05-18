int BASE = 2 ;  // the I/O pin for the first LED
int NUM = 6;   // number of LEDs
long randNumber;

void setup() {
  // put your setup code here, to run once:
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     pinMode(i, OUTPUT);   // set I/O pins as output
   }

}

void loop() {  
  // put your main code here, to run repeatedly:
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, LOW);    // set I/O pins as “low”, turn off LEDs one by one.
     delay(200);        // delay
   }
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     randNumber = random(10);
     if (randNumber > 5)
     {
        digitalWrite(i, HIGH);    // set I/O pins as “high”, turn on LEDs one by one
        delay(200);        // delay
     }
   }
}
