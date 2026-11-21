
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define SERVOMIN 150    // Minimum pulse length count 
#define SERVOMAX 600   // Maximum pulse length count 
#define SERVO_FREQ 50  //Reminder: Analog servos run at ~50 Hz updates
#define POT_PIN1 34
#define POT_PIN2 35
#define POT_PIN3 36  //SVP pin
#define POT_PIN4 39  //SVN pin
void setup() {
  Wire.begin(); 
  Serial.begin(115200);
  while (!Serial); // Waits for Serial Monitor to open
  delay(1000);
  Wire.begin(21,22); // Sets as SDA and SCL pins as precaution
  Wire.setClock(100000);
  analogSetAttenuation(ADC_11db);
  pwm.begin();
  pwm.setOscillatorFrequency(25000000);
  pwm.setPWMFreq(SERVO_FREQ); 
  delay(10);
  int initialPwm = map(0, 0, 180, SERVOMIN, SERVOMAX);
  pwm.setPWM(0, 0, initialPwm);
  pwm.setPWM(1,0,initialPwm);
  pwm.setPWM(2,0,initialPwm);
  pwm.setPWM(3,0,initialPwm);
  delay(500);
}

void loop() {
  int potReading1 = analogRead(POT_PIN1); //Attaches potentiometer reading to variable
  int pwmValue1 = map(potReading1, 0, 4095, SERVOMIN, SERVOMAX); //Maps potentiometer reading to servo pulse length paramenters 
  Serial.println(pwmValue1);
  pwm.setPWM(0, 0, pwmValue1);
  int potReading2 = analogRead(POT_PIN2); 
  int pwmValue2 = map(potReading2, 0, 4095, SERVOMIN, SERVOMAX);
  pwm.setPWM(1, 0, pwmValue2);
  int potReading3 = analogRead(POT_PIN3); 
  int pwmValue3 = map(potReading3, 0, 4095, SERVOMIN, SERVOMAX);
  pwm.setPWM(2, 0, pwmValue3);
  int potReading4 = analogRead(POT_PIN4); 
  int pwmValue4 = map(potReading4, 0, 4095, SERVOMIN, SERVOMAX); 
  delay(15); 
}
  
