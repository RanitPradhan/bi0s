#include <SPI.h>
char buff [50];
volatile byte indx;

#define SCK_PIN   13  // D13 = pin19 = PortB.5
#define MISO_PIN  12  // D12 = pin18 = PortB.4
#define MOSI_PIN  11  // D11 = pin17 = PortB.3
#define SS_PIN    10  // D10 = pin16 = PortB.2


void slave_init(void){
  pinMode(SCK_PIN, INPUT);
  pinMode(MOSI_PIN, INPUT);
  pinMode(MISO_PIN, OUTPUT);  // (only if bidirectional mode needed)
  pinMode(SS_PIN, INPUT);
}


void setup (void) {
   Serial.begin (115200);
   slave_init();
   delay(10);
   //SPCR |= _BV(SPE); // turn on SPI in slave mode
   //indx = 0; // buffer empty
   //SPI.attachInterrupt(); // turn on interrupt
}
/*
ISR (SPI_STC_vect) // SPI interrupt routine 
{ 
   byte c = SPDR; // read byte from SPI Data Register
   if (indx < sizeof buff) 
   {
      buff [indx++] = c; // save data in the next index in the array buff
      if (c == '\r') //check for the end of the word
      process = true;
   }
}
*/

unsigned short Read_data(void){
  union{
    unsigned short var;
    byte c[2];  //Two byte ka word
  } w;

  while(!(SPSR & (1<<SPIF))); //wait for serial tranfer to be completed
  w.c[1] = SPDR;  // Read first 8 bits from data register 
  while(!(SPSR & (1<<SPIF))); //wait for serial tranfer to be completed
  w.c[0] = SPDR;  //read lower 8 bits from data register
  return(w.var);
  }

void loop (void) {

  
   /*if (process) {
      process = false; //reset the process
      Serial.println (buff); //print the array on serial monitor
      indx= 0; //reset button to zero
   }
   */
  unsigned short word1;
  byte flag1;
  int val = digitalRead(SS_PIN);
  while(val==1); // Wait until slave select goes low
  SPCR = (1<<SPE)|(1<<SPR0); // SPI on
  word1 = Read_data();
  SPCR = (0<<SPE)|(0<<DORD)|(0<<MSTR)|(0<<CPOL)|(0<<CPHA)|(0<<SPR1)|(1<<SPR0);  // SPI off
  Serial.println(word1);
  delay(10);
}
