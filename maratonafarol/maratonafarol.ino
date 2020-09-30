int led = 12 ; //criando variável e atribuindo o número do pino
int led1 = 11;
int led2= 10;
int botao= 1;
int estadobotao =0; 
int ledvd = 3;
int ledv = 2;

void setup() 
{
  //Definindo o comportamento do LED (entrada ou saída);
  pinMode (led, OUTPUT); 
  pinMode (led1, OUTPUT); 
  pinMode (led2, OUTPUT);
  pinMode (botao, INPUT);
  pinMode (estadobotao, OUTPUT);
  pinMode (ledvd, OUTPUT);
  pinMode (ledv, OUTPUT);
   

}

void loop() {
 
  
   
                                                                                                                                                                                         

  digitalWrite (led ,HIGH);
  digitalWrite (ledv, HIGH);
  digitalWrite (led1,LOW);
   
    delay(8000);
    digitalWrite (led,LOW);
    digitalWrite(led1,HIGH);
    digitalWrite(ledv, HIGH);
    delay(10000);
    digitalWrite (led1,LOW);
    digitalWrite (ledv,LOW);
    delay (1000);
     digitalWrite (ledvd,HIGH);
     digitalWrite (led2,HIGH);
     delay(3000);
     digitalWrite (ledvd,LOW);
     digitalWrite (led2, LOW);
     delay (1000);
      estadobotao = digitalRead (botao);
  if (estadobotao == HIGH) {
       digitalWrite (led,LOW);
    digitalWrite(led1,HIGH);
    digitalWrite(ledv, HIGH);
    delay(10000);
    digitalWrite (led1,LOW);
    digitalWrite (ledv,LOW);
    delay (1000);
     digitalWrite (ledvd,HIGH);
     digitalWrite (led2,HIGH);
     delay(3000);
     digitalWrite (ledvd,LOW);
     digitalWrite (led2, LOW);
     delay (1000);
      
      
    
  }else {
    digitalWrite (led ,HIGH);
  digitalWrite (ledv, HIGH);
  digitalWrite (led1,LOW);
   
    delay(8000);
    digitalWrite (led,LOW);
    digitalWrite(led1,HIGH);
    digitalWrite(ledv, HIGH);
    delay(10000);
    digitalWrite (led1,LOW);
    digitalWrite (ledv,LOW);
    delay (1000);
     digitalWrite (ledvd,HIGH);
     digitalWrite (led2,HIGH);
     delay(3000);
     digitalWrite (ledvd,LOW);
     digitalWrite (led2, LOW);
     delay (1000);
    
  
  }

     
    
    
    
    
}

   

 
   



