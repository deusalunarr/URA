//Alterar qual LED acende utilizando potenciômetro

void setup(){
  pinMode(4, OUTPUT);  //Configura o pino digital 4 como SAÌDA para o LED R (vermelho)
  pinMode(5, OUTPUT);  //Configura o pino digital 5 como SAÍDA para o LED G (verde)
  pinMode(6, OUTPUT);  //Configura o pino digital 6 como SAÍDA para o LED B (blue)
}

void loop(){
  int pot = analogRead(A0);   //Lê e armazena o valor analógico do potenciômetro

  if (pot<=341){              //Se o valor do potenciômetro for de 0 a 341
    digitalWrite(4, HIGH);
  } else if (pot>341 && pot <=682){
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(6, HIGH);
  }

}