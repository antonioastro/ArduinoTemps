#define DATA_IN 2
#define DATA_OUT 3
#define numLEDs 8 //there are 8 LEDs per ring

#include <FastLED.h>

CRGB leds[numLEDs];

int i;
int minusone;
int plusone;
int two;
int three;
int four;
int five;
int six;
int seven;

void setup() {
  // put your setup code here, to run once:
pinMode(DATA_IN,OUTPUT);
pinMode(DATA_OUT,INPUT);

FastLED.addLeds<WS2812,DATA_IN,GRB>(leds,numLEDs);
FastLED.setBrightness(50);
}

void loop() {
  i=0;
  while (i<8){
    minusone=i_minus_one();
    plusone=i_plus_one();
    two=i_plus_two();
    three=i_plus_three();
    four=i_plus_four();
    five = i_plus_five();
    six=i_plus_six();
    seven=i_plus_seven();

    leds[minusone]=CRGB::Black;
    leds[i]=CRGB(70, 0, 70);
    leds[plusone]=CRGB(255, 50, 00);
    leds[two]=CRGB(70, 0, 70);
    leds[three]=CRGB(255, 50, 00);
    leds[four]=CRGB(70, 0, 70);
    leds[five]=CRGB(255, 50, 00);
    leds[six]=CRGB(70, 0, 70);
    leds[seven]=CRGB(255,50,00);
    FastLED.show();
    delay(250);
    i++;
  }
}

int i_minus_one(){
  if (i-1>=0){
    return i-1;
  } else if (i-1<0){
    return i-1+8;
  }
}

int i_plus_one(){
  if (i+1<8){
    return i+1;
  } else if (i+1>=8){
    return i+1-8;
  }
}

int i_plus_two(){
  if (i+2<8){
    return i+2;
  } else if (i+2>=8){
    return i+2-8;
  }
}

int i_plus_three(){
  if (i+3<8){
    return i+3;
  } else if (i+3>=8){
    return i+3-8;
  }
}

int i_plus_four(){
  if (i+4<8){
    return i+4;
  } else if (i+4>=8){
    return i+4-8;
  }
}

int i_plus_five(){
  if (i+5<8){
    return i+5;
  } else if (i+5>=8){
    return i+5-8;
  }
}

int i_plus_six(){
  if (i+6<8){
    return i+6;
  } else if (i+6>=8){
    return i+6-8;
  }
}

int i_plus_seven(){
  if (i+7<8){
    return i+7;
  } else if (i+7>=8){
    return i+7-8;
  }
}