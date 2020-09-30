
int pinoLed = 12; //PINO DIGITAL UTILIZADO PELO LED  
int pinoSensor = 9; //PINO DIGITAL UTILIZADO PELO SENSOR
float sensor; 
  
void setup(){  
  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
  Serial.begin(9600);
}  
   
void loop(){
  
  
  
  //sensor = digitalRead(pinoSensor);
  sensor = analogRead(pinoSensor);
  Serial.println(sensor);
  delay(1200);
//  if (digitalRead(pinoSensor) == LOW){ //SE A LEITURA DO PINO FOR IGUAL A LOW, FAZ
//        digitalWrite(pinoLed, HIGH); //ACENDE O LED
//  }else{//SENÃO, FAZ
//        digitalWrite(pinoLed, LOW); //apaga O LED
  }    
