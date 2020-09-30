/*Controlando o sensor infravermelho, TCRT5000 - 
 * Realizando a leitura de formar analógica ou digital.
*
*By Professor Junior Etec de Guaianazes - 2019
 */

 
int pinoSensor = A0; //PINO DIGITAL UTILIZADO PELO SENSOR
float sensor; 
  
void setup(){  
  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
  Serial.begin(9600);
}  
   
void loop(){
  
  
  
  //sensor = digitalRead(pinoSensor);
  sensor = analogRead(pinoSensor); //Leitura analógica
  Serial.println(sensor);
  delay(1200);



  }    


//EOF
