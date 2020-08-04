#include <FastLED.h>
#define NUM_LEDS 300

CRGBArray<NUM_LEDS> leds;
int hue;
int volume;
int calcul;

void setup() {
  Serial.begin(115200);
  hue = 0;
  
  FastLED.clear();
  FastLED.addLeds<NEOPIXEL,6>(leds, NUM_LEDS);
  for(int i = 0; i < NUM_LEDS; i++) {   
   leds[i]= CRGB::White; 
  }
  FastLED.show();
  }

void loop(){ 

  
  volume = (analogRead(A0)-914)*30;
  //Serial.println(volume);
  delay(50);
  
  hue = volume;
  
  CHSV color = CHSV(hue,255,255);
  
 for(int i = 0; i < NUM_LEDS; i++) {  
   leds[i]= color;
   
  }
FastLED.show();






  
}
