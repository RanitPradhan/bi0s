const int photo_diode = A0;
int input_val = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
input_val = analogRead(photo_diode);
Serial.print("Input Value: ");
Serial.println(input_val);
delay(1000);
}
