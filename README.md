# Smart Mobile Charger
  This project is a simple mobile charger that can be controlled by a smartphone app. It helps lengthen mobile battery life and gives users the advantage of charging their phones at night without worrying about overcharging. This project is especially useful for those who use older phones that don't have this feature built in.

## Hardware Components
  * ESP8266 12F WiFi MCU
  * Relay Module
  * AC-DC converter
  
 ## Software Components
  * Arduino IDE for writing and uploading code to the MCU. The code is available [here](Smart_Mobile_Charger/Smart_Mobile_Charger.ino)
  * Smartphone app for controlling the charger and setting charging thresholds. The .apk file is available [here](Application Files/Smart_Mobile_Charger.apk) and the raw .aia code file which was designed with [MIT App Inventor](https://appinventor.mit.edu/) is available [here](Application Files/Smart_Mobile_Charger.aia).
  
## How it works
   The charger is connected to a power source through the relay module and a mobile device is connected to the charger using a USB cable. The smartphone app monitors the battery level of the mobile device and compares it to a threshold set by the user.
   
   When the battery level reaches the threshold, the app sends a request to the ESP8266 MCU to turn off the relay and discontinue charging. This helps to prevent overcharging and extend the battery life of the mobile device.
   
   This project addresses the problem of overcharging, which can lead to reduced battery life and performance of mobile devices.
   
   By using the Smart Mobile Charger, users with older phones can charge their devices at night without worrying about overcharging, and can therefore have a good night's sleep while enjoying longer battery life as a result.

<!--
## Setup
  1. Connect the Arduino or compatible microcontroller to the relay module and USB power adapter according to the wiring diagram.
  2. Install the Arduino IDE and any necessary drivers for the microcontroller.
  3. Download the code for the Smart Mobile Charger from this repository and open it in the Arduino IDE.
  4. Modify the code as necessary to match your hardware configuration (e.g. specify the correct pin for the relay).
  5. Upload the code to the microcontroller using the Arduino IDE.
  6. Install the smartphone app and follow the instructions to set up the app and connect it to the charger.
-->
  
## Contributions
  We welcome contributions to this project! If you have any suggestions or improvements, please feel free to submit a pull request.
  
