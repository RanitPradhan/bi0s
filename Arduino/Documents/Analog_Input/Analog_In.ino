const int analog_in=A0;
const int LED=3;
int inputVal = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(analog_in,INPUT);
pinMode(LED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
inputVal = analogRead(analog_in);
Serial.println(inputVal);
analogWrite(LED, inputVal/4);
delay(500);
}
