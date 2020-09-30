//Sensor de Ultrasonico



//adicionando a biblioteca ultrasonic
#include "Ultrasonic.h"

//Criando objeto Ultrasonic e já definindo as portas
Ultrasonic Ultrasonic(7,6);



long microsec = 0;
float distanciaCM = 0;

int led1 = 11;
int led2 = 12;
int led3 = 13;


void setup() {
  Serial.begin(9600);
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT); 
}

void loop() {
  
  //Lendo o senor
  microsec = Ultrasonic.timing();

  //Convertendo a distência em CM
  distanciaCM = Ultrasonic.convert(microsec, Ultrasonic::CM);

  
  Serial.print(distanciaCM);
  Serial.println(" cm");
  delay(1000);

  if (distanciaCM <15){
    digitalWrite (led3, HIGH);
    delay(1000);
    digitalWrite (led3, LOW);
  }
  else if (distanciaCM >15 && distanciaCM <50){
    digitalWrite (led2, HIGH);
    delay(1000);
    digitalWrite (led2, LOW);
  }
  else if (distanciaCM >50){
    digitalWrite (led1, HIGH);
    delay(1000);
    digitalWrite (led1, LOW);
  }
}
  


