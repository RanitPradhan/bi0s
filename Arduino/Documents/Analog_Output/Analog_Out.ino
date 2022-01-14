const int LED=3;
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int brightness=0;brightness<=255;brightness++)
{
  analogWrite(LED,brightness);
  delay(10);
}
for(int brightness=255;brightness>0;brightness--)
{
  analogWrite(LED,brightness);
  delay(10);
}
}
