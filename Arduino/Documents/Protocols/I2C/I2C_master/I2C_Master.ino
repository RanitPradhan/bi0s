/*
 * I2C_Master.ino
 * Property of Schnider Electrics.[All rights reserved]
 * Created by- Prakhar Agrawal, Ranit Pradhan
 * Time - 18:30
 * Date - 17/04/22
*/

#include <Wire.h>

int flag = 0;

// Define Slave I2C Address
#define SLAVE_ADDR 9

void setup() {
  // Initialize I2C communications as Master
  Wire.begin();
}

void recieve_crap(void){
  // Write 0 to slave,to tell that it has to send crap values
  Wire.beginTransmission(SLAVE_ADDR);
  Wire.write(0);
  Wire.endTransmission();
  //request crap from slave, crap is 32 bit long
  Wire.requestFrom(SLAVE_ADDR,32);
  
  // Add characters to string
  String response = "";
  while (Wire.available()) {
      char b = Wire.read();
      response += b;
  } 
  
  }

void recieve_flag(void){

  
  // Write a character(1) to the Slave, to tell slave its time to send the flag
  Wire.beginTransmission(SLAVE_ADDR);
  Wire.write(1);
  Wire.endTransmission();
  //request crap from slave, flag is under 16 bytes
  Wire.requestFrom(SLAVE_ADDR,16);
  
  // Add characters to string
  String response = "";
  while (Wire.available()) {
      char b = Wire.read();
      response += b;
  } 
  }

void loop() {
  recieve_crap();
  delay(50);
  flag+=1;
  //To ensure flag is sent only once.
  if(flag==23){ // 23 is choosen as an arbitary value,considering logic analyser read time.
    delay(50);
    recieve_flag();
  }
  delay(50);
}
