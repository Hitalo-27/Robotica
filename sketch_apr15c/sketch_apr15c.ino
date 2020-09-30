int led1 = 10;
int led2 = 11;
int led3 = 12;
int led4 = 9;
int led5 = 13;

void setup() { 
  // put your setup code here, to run once:
pinMode (led1,OUTPUT);
pinMode (led2,OUTPUT);
pinMode (led3,OUTPUT); 
pinMode (led4,OUTPUT);
pinMode (led5,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (led3,HIGH);
digitalWrite (led4,HIGH);
delay (3000);
digitalWrite (led3,LOW);

digitalWrite (led2,HIGH);
delay (3000);
digitalWrite (led2,LOW);
digitalWrite (led4,LOW);

digitalWrite (led1,HIGH);
digitalWrite (led5,HIGH);
delay (3000);
digitalWrite (led1,LOW);
digitalWrite (led5,LOW);
delay (500);

}
