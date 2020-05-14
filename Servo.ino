#include <Servo.h>
int servo = 9;
int photo = A5;
int times = 1000;
float temp;
int pos = 70;//degrees of servo position
Servo myServo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servo);
}

void loop() {
  // put your main code here, to run repeatedly:
temp = analogRead(A5);// photores.
pos = temp - 180;
Serial.println(pos);
delay (times);
myServo.write(pos);

}
