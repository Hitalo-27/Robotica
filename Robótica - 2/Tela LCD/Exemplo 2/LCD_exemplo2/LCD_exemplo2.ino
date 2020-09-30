//Ligando Display de LCD

//declarando a utilização da biblioteca para controle da LCD
#include "LiquidCrystal.h"

//Agora criando um objeto da classe LiquidCrystal
//Já aproveitando para inicializar os pinos.
LiquidCrystal lcd(9,8,5,4,3,2);



void setup() {
  //Iniciando o LCD e informando o tamanho do LCD
  //É o tamanho definido no display.
  lcd.begin(16,2);

}

void loop() {
  lcd.clear(); // Limpando o LCD a cada giro do Loop.
  lcd.print("Robotica"); // Imprimindo mensagem em tela.
  delay(2000);

  lcd.setCursor(0,1); //Posicionando o cursor na Coluna 0 e na linha 1.
  lcd.print("N. 5023");
  delay(2000);

  //Rolando o display para a esquerda 
  for (int i = 0; i< 24; i++){
    lcd.scrollDisplayLeft();
    delay(300);
    
  }
delay(1000);
}
