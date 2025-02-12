#include <Adafruit_CircuitPlayground.h>
int step=0;
bool rightPressed=true;
bool leftPressed=true;
bool timing=false;
void setup() {
  // initialize the Circuit Playground as usual
  // this will initialize the onboard NeoPixels as well
  CircuitPlayground.begin();
}

void loop() {
  // for the on board NeoPixels, use the CircuitPlayground functions
  for(int i=0;i<10;i++){
if(i<=step){
  CircuitPlayground.setPixelColor(i,255,255,255);
}else{
  CircuitPlayground.setPixelColor(i,0,0,0);
}
  }
if(timing){
  if(step<0){
    CircuitPlayground.playTone(100,100);
  if(CircuitPlayground.leftButton()||CircuitPlayground.rightButton()){
    timing=false;
  }
  }else{
    step=step-1;
    delay(300);
  }
}
//CircuitPlayground.setPixelColor(i-1,0,0,0);
if(!timing){
if(CircuitPlayground.leftButton()&&CircuitPlayground.rightButton()){
  timing=true;
}
if(CircuitPlayground.leftButton()){
  if(step<9 && leftPressed){
  
  step=step+1;
  
  }
    leftPressed=false;
}else{
  leftPressed=true;
}
if(CircuitPlayground.rightButton()){
  if(step>0 && rightPressed){
  step=step-1;
  }
  rightPressed=false;
}else{
  rightPressed=true;
}
}
Serial.println(rightPressed);
}