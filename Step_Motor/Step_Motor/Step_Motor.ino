
#include <Stepper.h>

Stepper mystepper(200,2,3,4,5);

void setup(){
  mystepper.setSpeed(1000);
}

void loop(){
  mystepper.step(1);
  delay(1000);

}
