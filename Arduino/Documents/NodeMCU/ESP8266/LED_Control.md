## LED ON/OFF control using local web server of ESP8266 
### Procedure: 
To control ON/OFF state of a LED using ESP8266 module I've undergone the following steps
- First of all verified that my NodeMCU module is working fine with the Arduino IDE I'm using. 
- I explored how to use HTML & CSS stuffs in C++ for making local web server for NodeMCU.
- [Click here](https://github.com/RanitPradhan/bi0s/blob/master/Arduino/Documents/NodeMCU/ESP8266/NodeMCU.ino) to get the code. 
- After compiling & Uploading the code into the module the serial monitor shows the web address which we can browse from any client connected with the same server of NodeMCU module.
- So, I've browsed that web address from my laptop and mobile as well. Both were connected with same hotspot. 
- <img src = "https://raw.githubusercontent.com/RanitPradhan/bi0s/master/Arduino/Documents/NodeMCU/ESP8266/files/web_server_laptop.png" height = 250>
- <img src = "https://raw.githubusercontent.com/RanitPradhan/bi0s/master/Arduino/Documents/NodeMCU/ESP8266/files/web_server_mobile.png" height = 250>
- Here I'm trying to glow the builtin LED only which is **GPIO pin 16**
- 
