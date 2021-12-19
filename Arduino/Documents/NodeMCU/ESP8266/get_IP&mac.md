## To get MAC and IP address of devices connected to ESP8266

### Introduction: 
   This writeup explains getting MAC address and IP address of devices connected to ESP8266. Typically, the MAC address is only visible on each end of a “hop” in a packet so if you are going from some device via WiFi through the router to some other device, the MAC address you would see would be from your device and the router. The router will typically have a table of IP addresses and associated MAC addresses for those devices that it has handed out an IP address to via DHCP. <br>

   A media access control address (MAC address) of a device is a unique identifier assigned to network interfaces for communications. In this Example we will get MAC address of all connected devices to the ESP8266. ESP8266 acts as WiFi access point.
  
### Procedure: 
- First I have installed the esp8266 tool from the `Board Manager`(in Arduino IDE Tools tab).
- [Click here](https://github.com/esp8266/Arduino) to follow the setup for ESP8266 in Arduino IDE platform.
- [Click here](https://github.com/RanitPradhan/bi0s/blob/master/Arduino/Documents/NodeMCU/ESP8266/get_ip_mac_1.ino) to get the code I've used for getting IP and mac address of client/clients connected with ESP8266.
- After compiling and uploading the code to my ESP8266 module I've turnd on my Wi-fi in my mobile.
- <img src = "https://github.com/RanitPradhan/bi0s/blob/master/Arduino/Documents/NodeMCU/ESP8266/files/NodeMCU_wifi.jpg" height = "300">
- Now I can able to see the same wifi name which I've written in `ssid` section in the code. So, I gave the same password which I've given in `pass` of the code to connect with the ESP8266 module.

### Results: 
From the serial monitor of Arduino IDE we can able to see the output status of the IP and MAC addess of the client/clients.
#### When one device is connected

<img src = "https://raw.githubusercontent.com/RanitPradhan/bi0s/master/Arduino/Documents/NodeMCU/ESP8266/files/clint1.png"> <br>
#### When two devices are connected

<img src = "https://raw.githubusercontent.com/RanitPradhan/bi0s/master/Arduino/Documents/NodeMCU/ESP8266/files/clint2.png"> 
