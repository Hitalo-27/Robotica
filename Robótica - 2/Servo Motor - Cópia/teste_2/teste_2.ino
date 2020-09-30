#include "Servo.h"


  Servo s; //variável que cuida do Servo


  int poten = A2;
  int estado = 0;

 
void setup() {
  
  
  s.attach(8); //setando a porta do servo
  s.write(0);
  pinMode (poten, OUTPUT);

//Porta Serial para acompanharmos os valores passados pelo potenciômetro
  Serial.begin(9600);
}

void loop() {
  
   estado = analogRead(0);
   estado = map(estado, 0, 300, 0, 180);// o Valor 1023 não casa com o movimento total do motor.
   //por isso a adptação para 1000.
   s.write(estado);
  
    delay(15);  

  

  Serial.println(estado);
  
  //delay(1000);
}
