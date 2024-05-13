/*
 * @Author: lyz 3068126392@qq.com
 * @Date: 2024-05-10 16:41:20
 * @LastEditors: lyz 3068126392@qq.com
 * @LastEditTime: 2024-05-13 17:21:06
 * @FilePath: \liuyangzhi_hw2.2c:\Users\30681\Documents\PlatformIO\Projects\liuyangzhi_hw2.1\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<Arduino.h>
void setup() {
 
for(int i = 2; i <=8; i=i+3)
pinMode(i,OUTPUT);
}
 
void loop() {
  //来回for循环，设置好起止点
for(int i = 2; i <= 8; i=i+3 )
  {
    digitalWrite(i , HIGH);
    delay(500);
    digitalWrite(i , LOW);
  }

}
