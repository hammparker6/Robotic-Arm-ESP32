#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define SERVOMIN 150    // Minimum pulse length count 
#define SERVOMAX 600   // Maximum pulse length count 
#define SERVO_FREQ 50  //Reminder: Analog servos run at ~50 Hz updates
#define POT_PIN 34
void setup() {
  Wire.begin(); 
  Serial.begin(115200);
  while (!Serial); // Waits for Serial Monitor to open
  delay(1000);
  Wire.begin(21,22); // Sets as SDA and SCL pins as precaution
  analogSetAttenuation(ADC_11db);
  pwm.begin();
  pwm.setOscillatorFrequency(25000000);
  pwm.setPWMFreq(SERVO_FREQ); 
  delay(10);
  int initialPwm = map(0, 0, 180, SERVOMIN, SERVOMAX);
  pwm.setPWM(2, 0, initialPwm); 
  delay(500);
}

void loop() {
int potReading = analogRead(POT_PIN); //Attaches potentiometer reading to variable
  int pwmValue = map(potReading, 0, 4095, SERVOMIN, SERVOMAX); //Maps potentiometer reading to servo pulse length paramenters 
  pwm.setPWM(2, 0, pwmValue);
  Serial.println(pwmValue);
  delay(15);
}
  
