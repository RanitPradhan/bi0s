const int BUTTON=2;
const int LED=3;
int BUTTONState=0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
pinMode(BUTTON,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
BUTTONState=digitalRead(BUTTON);
if(BUTTONState == HIGH)
{
  digitalWrite(LED,HIGH);
}
else
{
  digitalWrite(LED,LOW);
}
}
