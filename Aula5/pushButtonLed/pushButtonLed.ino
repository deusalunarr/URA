//Programa para acender um LED enquanto o botãõ estiver sendo pressionado

int botao = 3, led = 6;
int estado;

void setup(){
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);  
}

void loop(){
  if(estado==HIGH){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}