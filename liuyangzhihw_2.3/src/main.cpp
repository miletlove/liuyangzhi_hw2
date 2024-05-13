#include <Arduino.h>
#include<LiquidCrystal.h>
// put function declarations here:
int myFunction(int, int);
const int rs =12, en=11,d4=6,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  
  lcd.begin(16,2);
  lcd.print("hello,world");}

void loop() {

  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
}


int myFunction(int x, int y) {
  return x + y;
}
