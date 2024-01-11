#include <Servo.h>

#define servo_pin 10 //define pin connection for the servo

Servo scanner; //create a named servo called scanner
float pos=0; //create a variable that can be adjusted to be the angle of the servo 0-180 only.

void setup() {
  // put your setup code here, to run once:
scanner.attach(servo_pin); //attach the servo to the arduino
}

void loop() {
  // put your main code here, to run repeatedly:
for (pos=0; pos<=180; pos=pos+0.5){ //initialise at pos 0, then while pos<180, increment in 0.5deg, every 5ms
  scanner.write(pos);
  delay(5);
}
for (pos=180; pos>=0; pos=pos-0.5){ //once at 180, increment doen by 0.5deg to 0 every 5ms
  scanner.write(pos);
  delay(5);
}
}
