//programa para realização de leitura em uma porta lógica utilizando 
//um ptênciometro
float valorLido = 0;


void setup() {
  Serial.begin (9600); // inicializando a porta serial, também define a velocidade de comuncação.
  

}

void loop() {
  valorLido = analogRead(A0);
 
  Serial.println(valorLido); //imprime a saída analogica no monitor serial
  delay(1300); // espera de um segundo e trezentos mili.

}
