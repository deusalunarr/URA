void setup()
{
  pinMode(3, OUTPUT);	//LED vermelho na porta digital 3
  pinMode(4, OUTPUT);	//LED amarelo na porta digital 4
  pinMode(5, OUTPUT);	//LED verde na porta digital 5
}

void loop()
{
  digitalWrite(3, HIGH);	//Acende o LED vermelho
  delay(5000); 		        //Mantem o LED aceso por 5000 milissegundos
  digitalWrite(3, LOW);		//Apaga o LED vermelho
  digitalWrite(5, HIGH);	//Acende o LED verde
  delay(5000); 		        //Mantem o LED aceso por 5000 milissegundos
  digitalWrite(5, LOW);		//Apaga o LED verde  
  digitalWrite(2, HIGH);	//Acende o LED amarelo
  delay(3000); 			//Mantem o LED aceso por 3000 milissegundos
  digitalWrite(2, LOW);		//Apaga o LED amarelo
}
