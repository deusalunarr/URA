//Programa para controlar os dois motores de acordo com a leitura do sensor óptico

#include <Servo.h>

Servo motor1, motor2;

int sensorLinha1 = 9;
int sensorLinha2 = 10;

void setup(){
  motor1.attach(5);
  motor2.attach(6);
  pinMode(sensorLinha1, INPUT);
  pinMode(sensorLinha2, INPUT);
}

void frente (){
  motor1.write(180);
  motor2.write(1);
}

void esquerda(){
  motor1.write(1);
  motor2.write(1);
}

void direita(){
  motor1.write(180);
  motor2.write(180);
}

void parar(){
  motor1.dettach();
  motor2.dettach();
}

void loop(){
  if (sensorLinha1==0 && sensorLinha2==0){
    frente();
  }
  if (sensorLinha1==1 && sensorLinha2==0){
    esquerda();
  }
  if (sensorLinha1==0 && sensorLinha2==1){
    direita();
  }
  if (sensorLinha1==1 && sensorLinha2==1){
    parar();
  }
}
