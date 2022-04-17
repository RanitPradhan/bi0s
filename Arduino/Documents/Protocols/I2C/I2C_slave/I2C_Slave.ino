/*
 * I2C_Slave.ino
 * Property of Schnider Electrics.[All rights reserved]
 * Created by- Prakhar Agrawal, Ranit Pradhan
 * Time - 15:20
 * Date - 17/04/22
*/
 
#include <Wire.h>

int flag=0;
byte x; //Global variable

// Define Slave I2C Address
#define SLAVE_ADDR 9
 
// Define string with response to Master
String answer = "flag{you_g0t_it}";
String crap = "pofvmnsjkh????3]54p345!";
 
void setup() {
 
  // Initialize I2C communications as Slave
  Wire.begin(SLAVE_ADDR);
  
  // Function to run when data is requested by master
  Wire.onRequest(requestEvent); 
  
  // Function to run when data received from master
  Wire.onReceive(receiveEvent);
}
 
void receiveEvent() {
 
  // Read while data received
  while (0 < Wire.available()) {
    x = Wire.read();
  }
  }

 
void requestEvent() {

  // Setup byte variable in the correct size

  if(x==0){
      byte response[32];
      // Format string as array
      for (byte i=0;i<32;i++) {
        response[i] = (byte)crap.charAt(i);
      }
  // Send response back to Master
      Wire.write(response,sizeof(response));
  }
  else{
    flagEvent();
  }
}

void flagEvent(){
  
  byte response[16];
  
  // Format answer as array
  for (byte j=0;j<16;j++) {
    response[j] = (byte)answer.charAt(j);
  }
  // Send response back to Master
  Wire.write(response,sizeof(response));
  }

void loop() {
  delay(50);
}
