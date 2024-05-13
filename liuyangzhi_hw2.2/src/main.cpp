/*
 * @Author: lyz 3068126392@qq.com
 * @Date: 2024-05-06 22:12:17
 * @LastEditors: lyz 3068126392@qq.com
 * @LastEditTime: 2024-05-13 17:37:16
 * @FilePath: \c++c:\Users\30681\Documents\PlatformIO\Projects\liuyangzhi_hw2\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>
#include<HardwareSerial.h>
// put function declarations here:
int myFunction(int, int);
int led= 4;
String mystring = "";
String short_String = "";
String xstr = "";
String Control_LED[] = { "led_on()","led_off()","led_flash(x)"};
int x = 0;
void setup() {
     pinMode(led,OUTPUT);
     Serial.begin(9600);
}

void loop() {
    if(Serial.available()>0){
        mystring = Serial.readStringUntil('\n');
        short_String = mystring.substring(0,8);
        Control_LED[0] = Control_LED[0].substring(0,8);
        Control_LED[1] = Control_LED[1].substring(0,8);
        Control_LED[2] = Control_LED[2].substring(0,8);
            
    if (mystring.length()>10){
        xstr = mystring.substring(10,mystring.length()-1);
        x = xstr.toInt();
    }
    if (short_String.compareTo(Control_LED[0]) == 0){
        Serial.println("ON");
        digitalWrite(led,HIGH);
    }else if(short_String.compareTo(Control_LED[1]) == 0){
        Serial.println("OFF");
        digitalWrite(led,LOW);
    }else if(short_String.compareTo(Control_LED[2]) == 0){
        Serial.println("OK");
        while (x>0){
            x--;
            digitalWrite(led,HIGH);
            delay(500);

            digitalWrite(led,LOW);
            delay(500);
        }
    }
}
}