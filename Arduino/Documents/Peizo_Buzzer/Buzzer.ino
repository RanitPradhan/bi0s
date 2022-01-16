const int buzzer = 3;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(buzzer,HIGH);
delay(200);
digitalWrite(buzzer,LOW);
delay(200);
}
