#include <Adafruit_CircuitPlayground.h>
int blinkSpeed=400;
void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<10;i++){
    CircuitPlayground.setPixelColor(i,200,200,200);
  }
  delay(blinkSpeed);
  for(int i=0;i<10;i++){
    CircuitPlayground.setPixelColor(i,0,0,0);
  }
  delay(blinkSpeed);
  if(CircuitPlayground.leftButton()){
    blinkSpeed=200;
    }else if(CircuitPlayground.rightButton()){
    blinkSpeed=800;
    }else{
      blinkSpeed=400;
    }
}
