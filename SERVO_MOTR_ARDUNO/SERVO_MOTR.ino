
#include <Servo.h>

Servo servo_7;

void setup(){
  servo_7.attach(7);
}

void loop(){
  if (170 <= analogRead(A0) && 340 >= analogRead(A0)) {
    servo_7.write(0);
    delay(100);

  }
  if (345 <= analogRead(A0) && 510 >= analogRead(A0)) {
    servo_7.write(45);
    delay(100);

  }
  if (512 <= analogRead(A0) && 680 >= analogRead(A0)) {
    servo_7.write(90);
    delay(100);

  }
  if (688 <= analogRead(A0) && 850 >= analogRead(A0)) {
    servo_7.write(135);
    delay(100);

  }
  if (855 <= analogRead(A0) && 1024 >= analogRead(A0)) {
    servo_7.write(180);
    delay(100);

  }

}
