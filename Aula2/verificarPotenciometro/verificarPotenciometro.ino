//Código para verificar resistência do potenciômetro

void setup(){
  Serial.begin(9600);     //Inicializa o Serial Monitor com a taxa de 9600
}

void loop(){
  int pot = analogRead(A0);
  Serial.println(pot);
  delay(500);
}