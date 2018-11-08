//Programa para controlar o brilho de um led utilizando potenciômetro

void setup(){
  pinMode (4, OUTPUT);  //Configura o pino digital 4 como SAÌDA para o LED
}

void loop(){
  int pot = analogRead(A0);   //Lê e armazena o valor analógico do potenciômetro
  int brilhoLed = map(pot, 0, 1023, 0, 255);  //Utiliza a função map() para transformar uma escala de 0-1023 em uma escala de 0-255
  analogWrite(4, brilhoLed);    //Acende o LED com o brilho proporcional à resistência do potenciômetro
}