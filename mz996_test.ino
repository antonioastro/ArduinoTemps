#include <Adafruit_PWMServoDriver.h>
#include <Wire.h>

#define idealFREQ 48.828125 //976.5625

Adafruit_PWMServoDriver testservo = Adafruit_PWMServoDriver();
/*
setPWM(servo_number,tick_on,tick_off) -- 1 cycle = 4096 ticks

time length of 1 cycle determined by frequency - e.g. 1000Hz -> 1 cycle = 1ms, split into 4096 ticks.
For ease of calcuation, Freq = 48.828125Hz, means 1 cycle = 20.48ms, and 1 tick length = 5us:

      MIN MAX
T(us) 500 2500
ticks 100 500
deg   0   180
*/

float i =0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
testservo.begin();
testservo.setPWMFreq(idealFREQ);
}

void loop() {
testservo.setPWM(0,0,100);
delay(1000);
testservo.setPWM(0,0,200);
delay(1000);
testservo.setPWM(0,0,300); 
delay(1000);
testservo.setPWM(0,0,400);
delay(1000);
testservo.setPWM(0,0,500);
delay(1000);
}
