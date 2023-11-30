# ArduinoLight

**The project is done in an online simulator in Workwi.**

**For the project, we take Arduino Uno and use LED, 2 resistors, and a photoresistor as components for simulation.**

**Steps of Simulation:**

**LED Bulb Connection:**
- Connect anode to pin 9.
- Connect the cathode to one end of the resistor and then to the GND of Arduino.

**Photoresistor Connection:**
- Connect LDR1:VCC to 5V of Arduino.
- Connect LDR1:GND to one end of the resistor, and connect to GND of Arduino from the other end of the resistor.
- Connect LDR1:A0 to A0 of Arduino.

![image](https://github.com/RokayaNeeraj/ArduinoLight/assets/83056819/9686fe06-5118-4628-9f36-7735e2e5b298)

**After the simulation, if the LDR value is less than 250, then the light will flash. Otherwise, the light will be turned off as it indicates that the room is brighter.**
