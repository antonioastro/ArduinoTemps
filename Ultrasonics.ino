int trig = 8;
int echo = 9; //the echo pin receives the reflected ultrasound, and is HIGH for the duration of the received signal

float pulse_time;
float distance;

void setup() {
  // put your setup code here, to run once:
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2); //this guarantees no signal is currently being sent
digitalWrite(trig,HIGH);
delayMicroseconds(10); //send a 10us long burst of ultrasonic pulses -- this can be higher or lower, but 10us seems to work best
digitalWrite(trig,LOW);

pulse_time = pulseIn(echo,HIGH); //look for echo to run high - counts in us

distance = 0.5*pulse_time*0.0343; //calculate the distance using speed of sound as 0.0343cm/us to get a distance in cm.

Serial.print(distance);
Serial.println(" cm");
delay(2000);
}
