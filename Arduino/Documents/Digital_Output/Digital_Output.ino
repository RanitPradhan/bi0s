void setup() {
  //setup pin
pinMode(LED_BUILTIN,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_BUILTIN,HIGH); // pin high
delay(1000); //delay for one second
digitalWrite(LED_BUILTIN,LOW); // pin low
delay(1000); // delay for one second
}
