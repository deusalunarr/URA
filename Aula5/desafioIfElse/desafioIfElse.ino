int ledR = 4, ledG = 5, ledB = 6;

void setup(){
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop(){
  int potenciometro = analogRead(A0);

  if (potenciometro<=340){
    digitalWrite(ledR, HIGH);
  } 
  if (potenciometro>340 && potenciometro<=681){
    digitalWrite(ledG, HIGH);
  }
  else {
    digitalWrite(ledB, HIGH);
  }
}