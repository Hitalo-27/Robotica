
int botao = 8;
int estadoBotao = 0;
int led = 12;

void setup() {
  // put your setup code here, to run once:
pinMode (botao, INPUT);
pinMode (led, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  
estadoBotao = digitalRead (botao);
if (estadoBotao == HIGH){
  digitalWrite (led, HIGH);
}

else{ 
  digitalWrite (led, LOW);
}
}
