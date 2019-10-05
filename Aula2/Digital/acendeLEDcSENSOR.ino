void setup() {
pinMode(8, INPUT); //Configura o sensor na porta 8 como pino de ENTRADA
pinMode(7, OUTPUT); //Configura o LED na porta 7 como pino de SAIDA
}

void loop() { 
int s1 = digitalRead(8); //declarando var para o Sensor Digital
if (s1==0){ //SE o sensor digital receber 0
  digitalWrite(7,HIGH); //o LED acende
}else{ //SE NÃO
  digitalWrite(7, LOW); //o LED apaga
}
}
