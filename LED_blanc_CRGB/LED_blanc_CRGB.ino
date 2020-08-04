#include <FastLED.h>
#define NUM_LEDS 300

CRGBArray<NUM_LEDS> leds;
int hue;

void setup() {
  hue = 0;
  
  FastLED.clear();
  FastLED.addLeds<NEOPIXEL,6>(leds, NUM_LEDS);
   CRGB color = CRGB(255,255,255);
   FastLED.setBrightness(255);
  
 for(int i = 0; i < NUM_LEDS; i++) {  
   leds[i]= color;
   
   
  }
  FastLED.show();
  }

void loop(){ 
  
}
