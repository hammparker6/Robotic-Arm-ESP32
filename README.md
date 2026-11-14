# Robotic-Arm-ESP32
My first engineering project with the ESP32, now just simple components on a breadboard for servo control.

## First Progress: Single Servo and Potentiometer with Servo Driver
* **Components:** ESP32 Mini, PCA9685 Servo Driver, MG996R Servo, 22 AWG Wires, 5A 5V Power Supply, 2200uF 16V Capacitor, 10k Potentiometer, 830 Pin Breadboard
* **Process:** Runs simple C++ script to map potentiometer input to servo movement values.
* **Issues:** This took me many hours more than it needed to. My first issue was my power supply was too weak for the servo, so I got a new one, but then the amps became too much for my wires, so I got new ones. My servo still wasn't moving though, and I troubleshooted for houres before discovering that the issue was the current draw of the servo upon booting up causing brownout, so I bought the capacitor to fix this issue sustainably and make this setup reliable.

### Setup Photo 
<img width="2989" height="1359" alt="IMG_7497" src="https://github.com/user-attachments/assets/89459430-533a-490a-9b4e-2747be6c23cf" />



