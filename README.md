# Medidor de Temperatura e Umidade com Arduino Nano

Este projeto utiliza um Arduino Nano para ler os valores de temperatura e umidade de um sensor DHT11 e exibi-los em um display LCD 16x2. Foram desenvolvidas duas versões do código: a primeira realiza a leitura e exibição dos dados, enquanto a segunda adiciona uma interface com botão com retenção para alternar entre diferentes modos de exibição.2

![Foto do projeto](caminho/para/imagem.jpg)

## 📦 Conteúdo do Repositório

- `Codigo/`: 763-3Contém a primeira versão do código, que realiza a leitura dos dados do sensor DHT11 e os exibe no display LCD. 
- `Codigo2/Codigo2MedidorDeTemperatura/`: 763-5Contém a segunda versão do código, que inclui uma interface com botão com retenção para alternar entre diferentes modos de exibição. 9

## 🛠️ Componentes Utilizados

- 1143-1[Arduino Nano](https://store.arduino.cc/products/arduino-nano) 
- 1143-2[Sensor DHT11](https://www.adafruit.com/product/386) 
- 1143-3[Display LCD 16x2 com interface I2C](https://www.adafruit.com/product/181) 
- 1143-4Botão com retenção (push-button com trava) 
- 1143-5Protoboard e jumpers 25

## 🔌 Esquema de Ligação

| Componente        | Pino Arduino |
|-------------------|-------------|
| 1450-1DHT11 (Data)       | D2          |
| 1450-2LCD (SDA)          | A4          |
| 1450-3LCD (SCL)          | A5          |
| 1450-4Botão (comum)      | D3          |32

*Nota: 1696-1Certifique-se de conectar os pinos VCC e GND de cada componente corretamente. 

## 🚀 Como Usar

1. 1786-1Clone este repositório: 40
   ```bash
   git clone https://github.com/gilsonfiho/Medidor-de-temperatura.git