int led =8; //criando variável e atribuindo o número do pino

void setup() 
{
  //Definindo o comportamento do LED (entrada ou saída);
  pinMode (led, OUTPUT);   

}

void loop() {
 
   digitalWrite(led, HIGH);
   delay(2000); //fica dois segundos acesa;
   digitalWrite(led, LOW);
   delay(1000); //fica um segunod apagada;
}
