//Programa para acionamento de um Relé.

#define relay 7 //definindo o relay como uma constante, diminuindo o cosumo de memória.

void setup() {
  pinMode( relay, OUTPUT);
  digitalWrite(relay, LOW);
 
 }

void loop() {
 
    digitalWrite(relay, HIGH); //Aciona o Relé
    delay(7000); // funcionamento por sete segundos
 
    digitalWrite(relay, LOW); // interrompe o Relé.
    delay(5000); //Cancela o funcionamento do Relé.
 
}
