int a = 7; //set digital pin 7 for segment a
int b = 6; // ... for b
int c = 5; // ... c
int d = 10; // ... d
int e = 11; // ... e
int f = 8; // ... f
int g = 9; // ... g
int dp = 4; // ... dp

void display_0(void) {
  unsigned char j;
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}

void display_1(void) {
  unsigned char j;
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(dp, LOW);

  for(j=7; j<=11; j++){
    digitalWrite(j, LOW);
  }
}

void display_2(void) {
  unsigned char j;
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);
  digitalWrite(dp, LOW);

  for(j=9; j<=11; j++){
    digitalWrite(j, HIGH);
  }
}

void display_3(void) {
  digitalWrite(g, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(dp, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
}

void display_4(void) {
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
  digitalWrite(a, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
}

void display_5(void) {
  unsigned char j;
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void display_6(void) {
  unsigned char j;
  digitalWrite(c, HIGH);
  digitalWrite(dp, LOW);
  digitalWrite(b, LOW);

  for (j=7;j<=11;j++) {
    digitalWrite(j, HIGH);
  }
}

void display_7(void) {
  unsigned char j;
  digitalWrite(dp, LOW);

  for (j=5;j<=7;j++) {
    digitalWrite(j, HIGH);
  }

  for (j=8;j<=11;j++) {
    digitalWrite(j, LOW);
  }
}

void display_8(void) {
  unsigned char j;
  digitalWrite(dp, LOW);

  for (j=5;j<=11;j++) {
    digitalWrite(j, HIGH);
  }
}

void display_9(void) {
  unsigned char j;
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(dp, LOW);
  digitalWrite(e, LOW);
}

void setup() {
  int i;
  for (i=4; i<=11; i++) {
    pinMode(i, OUTPUT);  
  }
}

void loop() {
  while(1) {
    display_0();
    delay(1000);
    
    display_1();
    delay(1000);
    
    display_2();
    delay(1000);
    
    display_3();
    delay(1000);
    
    display_4();
    delay(1000);
    
    display_5();
    delay(1000);
    
    display_6();
    delay(1000);
    
    display_7();
    delay(1000);

    display_8();
    delay(1000);

    display_9();
    delay(1000);        
  }
}
