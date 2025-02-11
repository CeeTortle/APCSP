3#include <Adafruit_CircuitPlayground.h>

void setup() {
  // initialize the Circuit Playground as usual
  // this will initialize the onboard NeoPixels as well
  CircuitPlayground.begin();
}

void loop() {
  // for the on board NeoPixels, use the CircuitPlayground functions
  for(int i=0;i<10;i++){
CircuitPlayground.setPixelColor(i,255,255,255);
CircuitPlayground.setPixelColor(i-1,0,0,0);
if(i==0){
  CircuitPlayground.setPixelColor(9,0,0,0);
}

delay(100);
}
}