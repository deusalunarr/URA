//Programa pra verificar funcionamento do botão através do serial monitor

int botao = 3;
int estado;

void setup(){
  pinMode(botao, INPUT);
  Serial.monitor(9600);
}

void loop(){
  if(estado==HIGH){
    Serial.println("Botão pressionado");
    delay(500);
  }
}