int trig = 2;
int rec = 3;
int light = 5;
float times;
float distance;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(OUTPUT,2);
pinMode(INPUT,3);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds (100);
digitalWrite(trig,HIGH);
delayMicroseconds (100);
digitalWrite(trig,LOW);




times = pulseIn(rec,HIGH);
distance =.34029*times*.5;
Serial.println(times);
delay(1000);

if(distance < 150){
  
  while(distance < 150){
  digitalWrite(trig,LOW);
delayMicroseconds (10);
digitalWrite(trig,HIGH);
delayMicroseconds (10);
digitalWrite(trig,LOW);
delayMicroseconds (10);
Serial.println(distance);
delay(1000);
}

}
else digitalWrite(light,LOW);


Serial.println(distance);
delay(1000);
}
