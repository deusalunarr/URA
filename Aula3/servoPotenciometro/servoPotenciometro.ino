//Programa para controlar o Servo Motor utilizando o potenciômetro

#include <Servo.h>

Servo motor;

void setup(){
  motor.attach(5);
}

void loop(){
  int pot = analogWrite(A4);
  int angulo = map(pot, 0, 1023, 0, 180);
  motor.write(angulo);
}