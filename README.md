# Robotic-Arm-ESP32
My first engineering project with the ESP32, now multi-servo control with potentiometers and initial CAD designs.

## First Progress: Single Servo and Potentiometer with Servo Driver
* **Components:** ESP32 Mini, PCA9685 Servo Driver, MG996R Servo, 22 AWG Wires, 5A 5V Power Supply, 2200uF 16V Capacitor, 10k Potentiometer, 830 Pin Breadboard
* **Process:** Runs simple C++ script to map potentiometer input to servo movement values.
* **Issues:** This took me many hours more than it needed to. My first issue was my power supply was too weak for the servo, so I got a new one, but then the amps became too much for my wires, so I got new ones. My servo still wasn't moving though, and I troubleshooted for houres before discovering that the issue was the current draw of the servo upon booting up causing brownout, so I bought the capacitor to fix this issue sustainably and make this setup reliable.

### Setup Photo 
<img width="299" height="136" alt="IMG_7497" src="https://github.com/user-attachments/assets/89459430-533a-490a-9b4e-2747be6c23cf" />

## Second Progress: Four Servo Control with Potentiometers and CAD Arm Link design
* **New Components:** 4 RK097 10K Linear Potentiometers
* **Issues:** The first thing I did was expand my wiring and code to four potentiometers, and I had issues relating to the new potentiometers I got. They were the only ones I could find with pins that fit a breadboard, so I had to make some compromises. The first issue is that the supporting pins made the potentiometers unable to enter the breadboard. I used my wire stripper to straighten these, but upon plugging in my potentiometers they caused my servos to move back and forth without any input, which I determined was caused by a loose breadboard connection. I figured the pins needed to be deeper, so I bent the supporting pins outwards to make them still able to support the potentiometer well but with it being lower into the breadboard. This worked, and coming across no issues with my code my setup was complete, making my 3D printed design the only thing left to do.
<img width="129" height="172" alt="image2" src="https://github.com/user-attachments/assets/62dbbc23-1aac-402c-918b-4be6e8254aed" />
<img width="129" height="172" alt="image3" src="https://github.com/user-attachments/assets/e0ab25ee-2bd3-4b08-9328-ce5946434315" />
<img width="129" height="172" alt="image4" src="https://github.com/user-attachments/assets/2a831b8a-1c79-406f-be03-15f05d8f4d66" />

### Setup Photos
<img width="302" height="403" alt="image1" src="https://github.com/user-attachments/assets/d4100781-b9c3-4d9f-b430-3315ad8abc23" />
<img width="403" height="302" alt="image0 (3)" src="https://github.com/user-attachments/assets/ccab8616-81dc-41be-9e61-f370ad766e7a" />

* **CAD Process:** I created a free student Fusion360 account and began using online tools to learn the basic things like extruding and shape creation with constraints and learned targeted things for robotic arms like the different components, stress bearing, and how to upload files from CAD libraries to model my designs around. The first thing I did was upload the model for my MG996R servos, then I created a shape for my arm link, finally creating places for attachment to the servo horn and body of the adjacent servo.
### Fusion 360 Photos
<img width="382" height="204" alt="Screenshot 2026-11-20 230503" src="https://github.com/user-attachments/assets/98f35991-1d7c-4fbe-a4fa-05b8d9febb28" />
<img width="382" height="204" alt="Screenshot 2026-11-20 191114" src="https://github.com/user-attachments/assets/01df1c62-7764-491a-923f-64a60e815ce9" />
<img width="382" height="204" alt="Screenshot 2026-11-20 204214" src="https://github.com/user-attachments/assets/f0398b25-0901-4dd5-9cda-124bc42c8887" />
<img width="382" height="204" alt="Screenshot 2026-11-20 230608" src="https://github.com/user-attachments/assets/6fb88398-5511-4bb7-aaa8-d2c96a15f0dd" />



  

