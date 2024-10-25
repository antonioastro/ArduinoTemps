#define RGB_pin 4 

#include <FastLED.h>
float numLEDs = 1;

CRGB leds[numLEDs]; //you can change the number of LEDs here, if using a WS2812 with multiple LEDs - i.e an LED strip array. must be of the form CRGB leds[float]

void setup() {
  // put your setup code here, to run once:
pinMode(RGB_pin,OUTPUT);
FastLED.addLeds<WS2812, RGB_pin, GRB>(leds,numLEDs); //RGB_pin and numLEDs are variables defined above. 
}

void loop() {
  // put your main code here, to run repeatedly:
leds[0]= CRGB(255,0,0); //write the colour to a certain LED in the chain. Can change 0 to be any number if you have an array
FastLED.show(); //instructs the WS2812 to write the changes to the LEDs
delay(1000);
leds[0]=CRGB(0,255,0);
FastLED.show();
delay(1000);
leds[0]=CRGB(0,0,255);
FastLED.show();
delay(1000);
}
