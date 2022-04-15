#include<SPI.h>
unsigned short x = 255;
byte c[8]={255,255,255,255,255,255,255,255};

void setup()
{
  Serial.begin(115200);
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV128); //bit rate = 16 MHz/128 = 125 kbit/sec
  digitalWrite(SS, LOW);   //Slave is selected
}

void loop()
{
  for(int i=0;i<8;i++){
    
    //SPI.transfer(highByte(c[i]));
    //Serial.println(c[i]);
    //Serial.println("...........");
    //SPI.transfer(lowByte(c[i]));
    //Serial.println(x);
    //Serial.println("...........");
    SPI.transfer(190);
    //-----------------------
    delay(10);  //test interval
  }
}
