/*
 * @Author: lyz 3068126392@qq.com
 * @Date: 2024-05-16 20:29:06
 * @LastEditors: lyz 3068126392@qq.com
 * @LastEditTime: 2024-05-17 16:46:56
 * @FilePath: \liuyangzhihw_2.3c:\Users\30681\Documents\PlatformIO\Projects\liuyangzhi_hw2.22\src\main.cpp
 * @Description: 这是默�?��?�置,请�?�置`customMade`, 打开koroFileHeader查看配置 进�?��?�置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
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
           
           Serial.println("�������");
           i=0;
    }
  }
    if(i==4){
    Serial.println("������ȷ");
    i=0;
     }
}
