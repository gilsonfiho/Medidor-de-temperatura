# Medidor de Temperatura e Umidade com Arduino Nano

Este projeto utiliza um Arduino Nano para ler os valores de temperatura e umidade de um sensor DHT11 e exibi-los em um display LCD 16x2. Foram desenvolvidas duas versões do código: a primeira realiza a leitura e exibição dos dados, enquanto a segunda adiciona uma interface com botão com retenção para alternar entre diferentes modos de exibição.

![Foto do projeto](caminho/para/imagem.jpg)

## 📦 Conteúdo do Repositório

- `Codigo/`: Contém a primeira versão do código, que realiza a leitura dos dados do sensor DHT11 e os exibe no display LCD.
- `Codigo2/Codigo2MedidorDeTemperatura/`: Contém a segunda versão do código, que inclui uma interface com botão com retenção para alternar entre diferentes modos de exibição.

## 🛠️ Componentes Utilizados

- [Arduino Nano](https://store.arduino.cc/products/arduino-nano)
- [Sensor DHT11](https://www.adafruit.com/product/386)
- [Display LCD 16x2 com interface I2C](https://www.adafruit.com/product/181)
- Botão com retenção (push-button com trava)
- Protoboard e jumpers

## 🔌 Esquema de Ligação

| Componente        | Pino Arduino |
|-------------------|--------------|
| DHT11 (Data)      | D2           |
| LCD (SDA)         | A4           |
| LCD (SCL)         | A5           |
| Botão (comum)     | D3           |

*Nota: Certifique-se de conectar os pinos VCC e GND de cada componente corretamente.*

## 🚀 Como Usar

1. Clone este repositório:
   ```bash
   git clone https://github.com/gilsonfiho/Medidor-de-temperatura.git