//Programa para acionar os servo motores conforme a leitura do sensor óptico (seguidor de linha)

#include <Servo.h>

Servo motor;

int sensorLinha = 9;

void setup(){
  pinMode(sensorLinha, INPUT);
  motor.attach(10);
}

void loop(){
  if (sensorLinha==0){
    motor.write(180);
  } else {
    motor.write(1);
  }
}