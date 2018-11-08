//Programa para ligar um servo motor

#include <Servo.h>

Servo motor;

void setup(){
  motor.attach(5);
}

void loop(){
  motor.write(180);
  motor.write(0);
}