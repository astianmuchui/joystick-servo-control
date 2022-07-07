#include <Servo.h>
int joy_pin = 2;
int x;
int y;
int state;
int motorpin = 10;
Servo motor;
void setup(){
  pinMode(joy_pin, OUTPUT);
  motor.attach(motorpin);
  Serial.begin(9600);
}
void loop(){
  y = analogRead(A0);
  x = analogRead(A1);
  state = digitalRead(joy_pin);
  // Serial.println(x);
  // Serial.println(y);

  // Move servo motor
  int val;
  val = map(y,0,1023,0,255);
  switch(y){
    case 512:
      break;
    default:
      motor.write(val);

  }
}
