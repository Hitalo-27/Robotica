//Sensor de Ultrasonico



//adicionando a biblioteca ultrasonic
#include "Ultrasonic.h"

//Criando objeto Ultrasonic e já definindo as portas
Ultrasonic Ultrasonic(11,9);



long microsec = 0;
float distanciaCM = 0;

int led1 = 11;
int led2 = 12;
int led3 = 13;


void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT); 
}

void loop() {
  
  //Lendo o senor
  microsec = Ultrasonic.timing();

  //Convertendo a distência em CM
  distanciaCM = Ultrasonic.convert(microsec, Ultrasonic::CM);

  
  Serial.print(distanciaCM);
  Serial.println(" cm");
  

  if (distanciaCM <10){
    tone(10,109,90);
  }

  if (distanciaCM <5){
    tone(10,210,150);
  }

  if (distanciaCM >10){
    tone(10, LOW);
    
  }

}
  


