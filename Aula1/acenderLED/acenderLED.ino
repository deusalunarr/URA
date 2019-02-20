void setup()
{
  pinMode(3, OUTPUT);      //Configura o LED na porta digital 3 como pino de SAIDA
}

void loop()
{
  digitalWrite(3, HIGH);  //Acende o LED
  delay(1000);            //Mantem o LED aceso por 1000 milissegundos (1 segundo)
  digitalWrite(3, LOW);  //Apaga o LED
  delay(1000);           //Mantem o LED apagado por 1000 milissegundos (1 segundo)
}
