#include<SPI.h>

String crap = "sdlkjg??||3&^$l..";
String flag = "flag=you_got_it";
int fl = 0;
void setup()
{
  Serial.begin(115200);
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV128); //bit rate = 16 MHz/128 = 125 kbit/sec
  digitalWrite(SS, LOW);   //Slave is selected
}

void send_crap(void){
  byte temp[32];
  for( byte i=0;i<32;i++){
    temp[i] = (byte)crap.charAt(i);
    SPI.transfer(temp[i]);
    delay(10); //test interval
  }
}

void send_flag(void){
  byte temp[16];
  for( byte i=0;i<16;i++){
    temp[i] = (byte)flag.charAt(i);
    SPI.transfer(temp[i]);
    delay(10); //test interval
  }
}
void loop()
{
  send_crap();
  delay(50);
  fl+=1;
  if(fl==12){
    send_flag();
  }
}
