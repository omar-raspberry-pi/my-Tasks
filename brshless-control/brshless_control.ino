
#include <LiquidCrystal.h>

LiquidCrystal mylcd(7,8,9,10,11,12);
volatile int a;
volatile int b;

void setup(){
  mylcd.begin(16,2);
  mylcd.setCursor(1-1, 1-1);
  mylcd.print("hello");
  delay(1000);
  mylcd.clear();
  a = 0;
  b = 0;
}

void loop(){
  a = analogRead(A0) / 4;
  b = a * 70;
  analogWrite(5,a);
  mylcd.setCursor(1-1, 2-1);
  mylcd.print("rpm=");
  mylcd.setCursor(5-1, 2-1);
  mylcd.print(b);

}