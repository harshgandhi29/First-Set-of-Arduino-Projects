float volt;
int pin = A5;
String colour;
String wel= "What colour would you like? "; 
int ping = 5;
int pinb = 6;
int pinr = 7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pin,OUTPUT);
pinMode (pinr,OUTPUT);
pinMode (ping,OUTPUT);
pinMode (pinb,OUTPUT);
volt= analogRead(pin);
Serial.println(wel);

while(Serial.available()==0){}
colour = Serial.readString();
Serial.println(colour);
Serial.println(volt);
  delay (2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  
while (volt > 0){
  volt= analogRead(pin);
  Serial.println(volt);

digitalWrite(pinb,LOW);
digitalWrite(pinr,LOW);
digitalWrite(ping,LOW);
  delay (500);
}


while (volt < 1){
volt= analogRead(pin);
Serial.println(volt);

if (colour == "green") {
digitalWrite(ping,HIGH);
digitalWrite(pinb,LOW);
digitalWrite(pinr,LOW);
}
if (colour == "red") {

digitalWrite(pinr,HIGH);
digitalWrite(pinb,LOW);
digitalWrite(ping,LOW);
}
if (colour == "blue") {

digitalWrite(pinb,HIGH);
digitalWrite(pinr,LOW);
digitalWrite(ping,LOW);
}
  delay (500);
}




}
