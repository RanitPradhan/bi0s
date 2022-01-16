#include<LiquidCrystal.h>
LiquidCrystal MyLCD(2,3,4,5,11,12);
void setup() {
  // put your setup code here, to run once:
MyLCD.begin(16,2); //defines 16x2 LCD
MyLCD.home();//set the position Column=0 and Row=0
MyLCD.print("Hello World"); //prints at(0,0) position
MyLCD.setCursor(0,1); //column=0, Row=1
MyLCD.print("16x2 LCD"); //prints at(0,1) position
}

void loop() {

}
