#include<Servo.h>
int trig=9;
int echo=10;
Servo servo;
float duration;
int dis;
void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
  servo.attach(11);
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  }
  void loop(){
    digitalWrite(trig,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig,LOW);
    duration=pulseIn(echo,HIGH);
    dis=duration*0.034/2;
    Serial.println(dis);
    if(dis<15){servo.write(100);delay(1500);}
    else{servo.write(10);}
    delay(10);
    }
