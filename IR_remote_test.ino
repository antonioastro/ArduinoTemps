#include <IRremote.h>

const int IR = 9;
IRrecv irrecv(IR); //define the IR receiving pin
decode_results results; //create an instance of the remote information decoded

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true); //this will flash the built in LED to show a signal is received
}

void loop() {
  if (irrecv.decode(&results)){
    Serial.println(results.value,HEX);
    irrecv.resume();
  }
}
