#include "Ultrasonic.h"


//Definicoes pinos Arduino ligados a entrada da Ponte H
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;


long microsec =0;
float distanciacm = 0;
 
void setup()
{
 
  
  
  //Define os pinos como saida
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 Serial.begin(9600);


 
}

void loop(){

  microsec = Ultrasonic.timing();

  distanciacm = Ultrasonic.convert(microsec, Ultrasonic::CM);

  Serial.print(distanciacm);
  Serial.println("cm");
  delay(500);

  if (distanciacm >40){
    //Gira o Motor A no sentido horario
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(100);
  }

  if (distanciacm <=40 and distanciacm>10){
    //Gira o Motor A no sentido horario
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, HIGH);
    delay(50);
    
  }

  if (distanciacm <10){
    //Dando ré 
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(100);

    
  //Girando o carro para desviar do obstaculo
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, HIGH);
    delay(50);
    
  }

}
