
int botao1 = 8;
int botao2 = 11;
int estadoBotao1 = 0;
int estadoBotao2 = 0;
int led1 = 10;
int led2 = 13;

void setup() {
  // put your setup code here, to run once:
pinMode (botao1, INPUT);
pinMode (botao2, INPUT);
pinMode (led1, OUTPUT); 
pinMode (led2, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  
estadoBotao1 = digitalRead (botao1);
estadoBotao2 = digitalRead (botao2);
if (estadoBotao1 == HIGH){
  digitalWrite (led1, HIGH);
}
else{ 
  digitalWrite (led1, LOW);
}

 if (estadoBotao2 == HIGH){
  digitalWrite (led2, HIGH);
}
else { 
  digitalWrite (led2, LOW);
  
}
}
