## To get MAC and IP address of devices connected to ESP8266

### Introduction: 
                  This writeup explains getting MAC address and IP address of devices connected to ESP8266. Typically, the MAC address is only visible on each end of a “hop” in a packet so if you are going from some device via WiFi through the router to some other device, the MAC address you would see would be from your device and the router. The router will typically have a table of IP addresses and associated MAC addresses for those devices that it has handed out an IP address to via DHCP. <br>

                  A media access control address (MAC address) of a device is a unique identifier assigned to network interfaces for communications. In this Example we will get MAC address of all connected devices to the ESP8266. ESP8266 acts as WiFi access point.
  
### Procedure: 
- First I have installed the esp8266 tool from the `Board Manager`(Arduino IDE).
- [click here](https://github.com/esp8266/Arduino) to follow the setup for ESP8266 in Arduino IDE platform.
- [click here](https://github.com/RanitPradhan/bi0s/blob/master/Arduino/Documents/NodeMCU/ESP8266/get_ip_mac_1.ino) to get the code I've used for getting IP and mac address of client/clients connected with ESP8266.
- 
