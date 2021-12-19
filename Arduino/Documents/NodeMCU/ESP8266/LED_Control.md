## LED ON/OFF control using local web server of ESP8266 
### Procedure: 
To control ON/OFF state of a LED using ESP8266 module I've undergone the following steps
- First of all verified that my NodeMCU module is working fine with the Arduino IDE I'm using. 
- I explored how to use HTML & CSS stuffs in C++ for making local web server for NodeMCU.
- [Click here](https://github.com/RanitPradhan/bi0s/blob/master/Arduino/Documents/NodeMCU/ESP8266/NodeMCU.ino) to get the code. 
- After compiling & Uploading the code into the module the serial monitor shows the web address which we can browse from any client connected with the same server of NodeMCU module.
- <img src = "https://raw.githubusercontent.com/RanitPradhan/bi0s/master/Arduino/Documents/NodeMCU/ESP8266/files/wifi_connected.png" height = 250>
- So, I've browsed that web address from my laptop and mobile as well. Both were connected with same hotspot. 
- <img src = "https://raw.githubusercontent.com/RanitPradhan/bi0s/master/Arduino/Documents/NodeMCU/ESP8266/files/web_server_laptop.png" height = 250>
- <img src = "https://raw.githubusercontent.com/RanitPradhan/bi0s/master/Arduino/Documents/NodeMCU/ESP8266/files/web_server_mobile.jpeg" height = 250>
- Here I'm trying to glow the inbuilt LED only which is connected with **GPIO pin 16**

### Result:
Checkout the outputs 
- [Mobile as a client](https://drive.google.com/file/d/1PkaJysajAugZT6ZP-bY_-FBBXek8zV1m/view?usp=sharing)
- [Laptop as a client](https://drive.google.com/file/d/1Pl2ziGyvkSBNuczplgAf0e6H0ZBJELAX/view?usp=sharing)

