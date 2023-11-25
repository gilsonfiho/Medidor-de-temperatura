//Medidor de temperatura e Umidade com impressão em um LCD 16x2
//Autor: Gilson Filho

//Declaração de bibliotecas
#include <LiquidCrystal.h>
#include <dht.h>

//Definindo os pinos que serão utilizados para ligação ao display
LiquidCrystal lcd(12, 11, 2, 3, 4, 5);

//Definção de pinos
#define pinBotao1 A5
#define pinBotao2 A6
#define pinoDHT11 A1

dht DHT; //VARIÁVEL DO TIPO DHT

void setup() {
  
  //Define o número de colunas e linhas do LCD
  lcd.begin(16, 2);
  Serial.begin(9600);

  //Configuraçãos dos pinos
  pinMode(pinBotao1,INPUT_PULLUP);
  pinMode(pinBotao2,INPUT_PULLUP);
  
}

void loop() {

  //Leitura dos valores do sensor
  DHT.read11(pinoDHT11);
 
  //Limpa a tela
  lcd.clear();
  //Posiciona o cursor na coluna 1, linha 0;
  lcd.setCursor(1, 0);
  //Envia o texto entre aspas para o LCD
  lcd.print("Temperatura:");
  //Posiciona o cursor na coluna 1, linha 0;
  lcd.setCursor(13, 0);
  //Envia o texto entre aspas para o LCD
  lcd.print(DHT.temperature,0);
  //Posiciona o cursor na coluna 1, linha 0;
  lcd.setCursor(1, 1);
  //Envia o texto entre aspas para o LCD
  lcd.print("Umidade:");
  //Posiciona o cursor na coluna 1, linha 0;
  lcd.setCursor(9, 1);
  //Envia o texto entre aspas para o LCD
  lcd.print(DHT.humidity,0);
  delay(1000);
  
}
