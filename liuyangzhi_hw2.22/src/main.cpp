/*
 * @Author: lyz 3068126392@qq.com
 * @Date: 2024-05-16 20:29:06
 * @LastEditors: lyz 3068126392@qq.com
 * @LastEditTime: 2024-05-17 16:46:56
 * @FilePath: \liuyangzhihw_2.3c:\Users\30681\Documents\PlatformIO\Projects\liuyangzhi_hw2.22\src\main.cpp
 * @Description: è¿™æ˜¯é»˜è?¤è?¾ç½®,è¯·è?¾ç½®`customMade`, æ‰“å¼€koroFileHeaderæŸ¥çœ‹é…ç½® è¿›è?Œè?¾ç½®: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>
#include<HardwareSerial.h>
String mystring = "";
String key_string[] ={"AA","BB","CC","DD"};
int i=0;
void setup() {
  Serial.begin(9600);
}
void loop() {
   
  if(Serial.available()>0){
    mystring=Serial.readStringUntil('\r');
    if(mystring.compareTo("")==0){
    }
    else if(mystring.compareTo(key_string[i]) ==0){
           i++;
    }else{
           
           Serial.println("ÃÜÂë´íÎó");
           i=0;
    }
  }
    if(i==4){
    Serial.println("ÃÜÂëÕıÈ·");
    i=0;
     }
}
