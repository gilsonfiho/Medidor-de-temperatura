//Medidor de temperatura e Umidade com impressão em um LCD 16x2
//Autor: Gilson Filho

//Declaração de bibliotecas
#include <LiquidCrystal.h>
#include <dht.h>

//Definindo os pinos que serão utilizados para ligação ao display
LiquidCrystal lcd(12, 11, 2, 3, 4, 5);

//Definção de pinos
#define pinBot1 10
#define pinBot2 A5
#define pinoDHT11 A1

dht DHT; //VARIÁVEL DO TIPO DHT

//Declaração da função do botão
int pinBotao1MultiFuncoes();

void setup() {
  
  //Define o número de colunas e linhas do LCD
  lcd.begin(16, 2);
  Serial.begin(9600);

  //Configuraçãos dos pinos
  pinMode(pinBot1,INPUT_PULLUP);
  pinMode(pinBot2,INPUT_PULLUP);
  
}

void loop() {

  //Leitura dos valores do sensor
  DHT.read11(pinoDHT11);
 
  //Limpa a tela
  lcd.clear();
  //Posiciona o cursor na coluna 1, linha 0;
  if(pinBotao1MultiFuncoes == 0){
    //Limpa a tela
    lcd.clear();
    //Posiciona o cursor na coluna 1, linha 0;
    lcd.setCursor(1, 0);
    //Envia o texto entre aspas para o LCD
    lcd.print("  Bem Vindo ");
    //Posiciona o cursor na coluna 1, linha 0;
    lcd.setCursor(1, 1);
    //Envia o texto entre aspas para o LCD
    lcd.print(" GF Robotica ");
  }
  else if(pinBotao1MultiFuncoes() == 1){
    //Limpa a tela
    lcd.clear();
    //Posiciona o cursor na coluna 1, linha 0;
    lcd.setCursor(1, 0);
    //Envia o texto entre aspas para o LCD
    lcd.print(" Temperatura:");
    //Posiciona o cursor na coluna 7, linha 1;
    lcd.setCursor(7, 1);
    //Envia o texto entre aspas para o LCD
    lcd.print(DHT.temperature,0);
    //Posiciona o cursor na coluna 1, linha 0;
  }
  else if(pinBotao1MultiFuncoes() == 2){
    //Limpa a tela
    lcd.clear();
    //Posiciona o cursor na coluna 1, linha 0;
    lcd.setCursor(1, 0);
    //Envia o texto entre aspas para o LCD
    lcd.print("   Umidade:");
    //Posiciona o cursor na coluna 5, linha 1;
    lcd.setCursor(6, 1);
    //Envia o texto entre aspas para o LCD
    lcd.print(DHT.humidity,0);
  }
  delay(10);

}

// Função para trabalhar com o botão 1
int pinBotao1MultiFuncoes() {
  
   #define tempoDebounce 50 //(tempo para eliminar o efeito Bounce EM MILISEGUNDOS)

   bool estadoBotao;
   static bool estadoBotaoAnt; 
   static int estadoRet = -1;
   static unsigned long delayBotao = 0;

   if ( (millis() - delayBotao) > tempoDebounce ) {
       estadoBotao = digitalRead(pinBot1);
       if ( estadoBotao && (estadoBotao != estadoBotaoAnt) ) {
          estadoRet++;
          if(estadoRet > 2){
            estadoRet = 0;
          }
          delayBotao = millis();
       }
       estadoBotaoAnt = estadoBotao;
   }

   return estadoRet;
   
}
