#include<Servo.h>
Servo servo_1; //servo name 
void setup() {
  // put your setup code here, to run once:
servo_1.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
servo_1.write(45);//parameter in degree unit
delay(1000);
servo_1.write(90);
delay(1000);
}
