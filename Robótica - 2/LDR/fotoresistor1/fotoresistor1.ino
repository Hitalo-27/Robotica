int limitedisparo = 200; //calcula a intensidade da luz
  //100, 200, 300, 400, 500 quanto menor for mais rapido acende.

int led = 9; //setando variável para o led porta 9.


//imprimir leitura  atuais dos monitores da IDE Arduino.
int sensor = A5; //setando a variável para o sensor Analógica 10.

int sensorvalue = 0; //valor do sensor ao começar.


void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);

}

void loop() {

  sensorvalue = analogRead(sensor);


  if (sensorvalue > limitedisparo) {
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }

Serial.print("Leitura atual do sensor:");
Serial.println(sensorvalue);
delay(130);

}
