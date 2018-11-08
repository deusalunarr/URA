//Programa para ligar o sensor óptico reflexivo (sensor seguidor de linha)

int sensorLinha = 9;

void setup(){
  pinMode(sensorLinha, INPUT);
  Serial.begin(9600);
}

void loop(){
  if (sensorLinha==0){
    Serial.println("Sensor está vendo branco");
    delay(1000);
  }
  if (sensorLinha==1){
    Serial.println("Sensor está vendo preto");
    delay(1000);
  }
}