const int transistor= 2; 
void setup() {
  // put your setup code here, to run once:
pinMode(transistor,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(transistor,HIGH);
delay(1000);
digitalWrite(transistor,LOW);
delay(1000);
}
