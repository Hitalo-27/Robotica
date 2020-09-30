/*
 * Sketch para controle direcional de motor DC utilizando a ponte H.  
 * 
 * by professor Junioir
 */

//MOTOR A
int PH1 = 6;
int PH2 = 7;


//MOTOR B
int PH3 = 5;
int PH4 = 4;


void setup() {
  pinMode (PH1, OUTPUT);  
  pinMode (PH2, OUTPUT);
  pinMode (PH3, OUTPUT);
  pinMode (PH4, OUTPUT);
}

void loop() {
  digitalWrite(PH1, LOW);//O ESTADO HIGH, ACIONA O MOTOR A EM UMA DIREÇÃO.
  digitalWrite(PH2,HIGH);

  digitalWrite(PH3, HIGH);//O ESTADO HIGH, ACIONA O MOTO B EM UMA DIREÇÃO.
  digitalWrite(PH4, LOW);
  delay(400000000); //mantem o giro do motor por 4 segundos.
  
  digitalWrite(PH3, LOW);//O ESTADO HIGH, ACIONA O MOTOR A EM UMA DIREÇÃO.
  digitalWrite(PH4,LOW);
  delay(4000);

}


//#EOF
