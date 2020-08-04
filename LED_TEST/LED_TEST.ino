#include <FastLED.h>
#define NUM_LEDS 300

CRGBArray<NUM_LEDS> leds;
int hue;

void setup() {
  hue = 0;
  
  FastLED.clear();
  FastLED.addLeds<NEOPIXEL,6>(leds, NUM_LEDS);
  for(int i = 0; i < NUM_LEDS; i++) {   
   leds[i]= CRGB::White; 
  }
  FastLED.show();
  }

void loop(){ 
  if(hue==255)
  {
    hue = 255;
  }
  hue+= 5;
  
  CHSV color = CHSV(hue,255,255);
  
 for(int i = 0; i < NUM_LEDS; i++) {  
   leds[i]= color;
   
  }
FastLED.show();
delay(5);






  
}
