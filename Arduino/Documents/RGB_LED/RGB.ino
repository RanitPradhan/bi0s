const int RED = 9;
const int GREEN = 10;
const int BLUE = 11;
void setup() {
  // put your setup code here, to run once:
pinMode(RED,OUTPUT);
pinMode(GREEN,OUTPUT);
pinMode(BLUE,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(RED,50);
analogWrite(GREEN,50);
analogWrite(BLUE,200);
delay(1000);
analogWrite(RED,100);
analogWrite(GREEN,100);
analogWrite(BLUE,100);
}
