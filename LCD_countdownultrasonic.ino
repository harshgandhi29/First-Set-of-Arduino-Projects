#include <LiquidCrystal.h>
int rs= 7;
int en=8;
int d4 =9;
int d5 =10;
int d6 =11;
int d7 =12;
//int j=0;
//int num;
int trig = 2;//output
int echo = 3;//input
int distance;
int times;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2); //16 coloums and 2 rows is the area of the LCD
Serial.begin(9600);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(200);
digitalWrite(trig,HIGH);
delayMicroseconds(30);
digitalWrite(trig,LOW);

times= pulseIn(echo,HIGH);

distance = (.34029*times*.5)/10;
delay (800);

lcd.setCursor(0,0);
lcd.print("You are ");
lcd.print(distance);
lcd.print("cm ");
lcd.setCursor(0,2);
lcd.print("away :) ");
/*Serial.print("What is your number: ");
while (Serial.available()==0){};
num = Serial.parseInt();
Serial.println(num);
while(num>=0){
lcd.setCursor(0,2);
lcd.print(num);
delay(2000);
num--;
}
lcd.clear();*/
}
