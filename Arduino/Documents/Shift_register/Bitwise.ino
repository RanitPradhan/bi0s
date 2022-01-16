const int DataPin = 2;
const int ClockPin = 3;
const int LatchPin = 4;
byte Data = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(DataPin,OUTPUT);
pinMode(ClockPin,OUTPUT);
pinMode(LatchPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
shiftWrite(5,1);
delay(1000);
shiftWrite(5,0);
delay(1000);
}

void shiftWrite(int Pin, boolean State)
{
  bitWrite(Data,Pin,State);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,MSBFIRST, Data);
  digitalWrite(LatchPin,HIGH);
}
