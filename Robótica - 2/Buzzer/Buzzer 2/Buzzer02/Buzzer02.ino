//Programa Sirene para Buzzer

#define tempo 10
int frequencia = 0;
int Pinofalante = 9;
int led = 8;


void setup() {

pinMode(Pinofalante, OUTPUT);
pinMode(led, OUTPUT); 
}

void loop() {
 for (frequencia = 150; frequencia < 1800; frequencia +=1)
 {  
  tone (Pinofalante, frequencia,tempo);
  delay(1);
  
  }

  
 for (frequencia = 1800; frequencia > 150; frequencia -=1)
 {
  
  tone(Pinofalante, frequencia, tempo);
  delay(1);
  } 

}
