void setup()
{
  pinMode(3, OUTPUT);	//LED vermelho na porta digital 3
  pinMode(4, OUTPUT);	//LED verde na porta digital 4
  pinMode(5, OUTPUT);	//LED azul na porta digital 5
}

void loop()
{
  digitalWrite(3, HIGH);	//Acende o LED vermelho
  delay(1000); 				//Mantem o LED aceso por 1000 milissegundos
  digitalWrite(3, LOW);		//Apaga o LED vermelho
  digitalWrite(4, HIGH);	//Acende o LED verde
  delay(1000); 				//Mantem o LED aceso por 1000 milissegundos
  digitalWrite(4, LOW);		//Apaga o LED verde  
  digitalWrite(5, HIGH);	//Acende o LED azul
  delay(1000); 				//Mantem o LED aceso por 1000 milissegundos
  digitalWrite(5, LOW);		//Apaga o LED azul
}
