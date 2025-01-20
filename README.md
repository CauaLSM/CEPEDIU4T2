# Projeto U4T2 - Controle de pinos GPIO da ferramenta educacional BitDogLab

👋 Olá! Este projeto demonstra a utilização de ferramenta educacional chamda BitDogLab, onde nela simulamos uma sequeência de ações, utilizando LEDs e um buzzer


## 🚀 Sequências de ação

| Tecla | Funcionalidade                                      |
|-------|---------------------------------------------------|
| **1**  | Acende apenas o LED verde por 2 segundos. |
| **2**  | Acende apenas o LED azul por 2 segundos.  |
| **3**  | Acende apenas o LED vermelho por 2 segundos. |
| **4**  | Acende simultaneamente os LEDs vermelho, verde e azul por 2 segundos.                 |
| **5**  | Desliga todos os LEDs |
| **6**  | Aciona o buzzer por 2 segundos.     |




## 🛠️ Requisitos

### Hardware

* **Raspberry Pi Pico:**  Um microcontrolador Raspberry Pi Pico.
* **LEDs:** Três LEDs (vermelho, verde e azul).
* **Buzzer:** Um buzzer.
* **Resistores:** Resistores apropriados para os LEDs (tipicamente 220-330 ohms) e para o buzzer (opcional, dependendo do buzzer).

### Software

* **SDK do Raspberry Pi Pico:** O SDK (Software Development Kit) do Pico, que inclui as bibliotecas e ferramentas necessárias para desenvolver e compilar o código. [Instruções de instalação](https://www.raspberrypi.com/documentation/pico/getting-started/)
* **CMake:** Um sistema de construção multiplataforma usado para gerar os arquivos de construção do projeto.
* **Compilador C/C++:**  Um compilador C/C++ como o GCC (GNU Compiler Collection).
* **Git:** (Opcional) Para clonar o repositório do projeto.


# Como usar

1. **Clone o repositório (opcional):**
   Se você estiver usando um repositório Git, clone-o usando:
   ```bash
   git clone <URL_DO_REPOSITORIO>
   ```

2. **Instale o SDK do Raspberry Pi Pico:**
   Siga as instruções no site oficial do Raspberry Pi para configurar o ambiente de desenvolvimento e instalar o SDK do Pico. O link está na seção de requisitos de software.

3. **Conecte o Raspberry Pi Pico:**
   Conecte o Pico ao seu computador via USB.

4. **Compile o código:**
   Navegue até o diretório do projeto e execute os seguintes comandos:
   ```bash
   cd <PASTA_DO_PROJETO>
   mkdir build
   cd build
   cmake ..
   make
   ```

5. **Carregue o firmware:**
   Copie o arquivo .uf2 gerado na pasta build para seu Raspberry Pi Pico. Para isso, pressione e segure o botão BOOTSEL no Pico enquanto o conecta ao computador. O Pico aparecerá como um dispositivo de armazenamento USB. Arraste o arquivo .uf2 para o Pico.

## 💡 Dicas

* **Organização:** O projeto está organizado com arquivos separados para as funções de cada tecla (functions.c/.h), e o código principal (U4T1.c). Isso facilita a manutenção e a adição de novas funcionalidades.

* **PWM:** O buzzer é controlado usando PWM (Pulse Width Modulation) para variar seu volume.

## Estrutura do Projeto
```
U4T2/
├── CMakeLists.txt
├── functions/
│   └── LED_AZUL.c
│   └── Ledverde.c
│   └── Piscar_Todos_Leds.c
│   └── acionar_buzzer.c
│   └── desligartudo.c
│   └── functions.h
└── U4T1.c
└── U4T1.h
└── pico_sdk_import.cmake
```

## 🎉 Divirta-se explorando e modificando o projeto!

# 👥 Atribuições de cada Membro

- Raiane - Função Ligar_led_verde;

- ERICK - Função Ligar_led_vermelho;

- Jonas - Função Ligar_tres_leds;

- Kleber - ajustes no repositório;

- Cauã - Organização do repositório;

- Brunna - Função Acionar_buzzer;

- Eduardo - Construção do arquivo U4T2.c

- Alana - Função Desligar_tudo;

 ## 🔗 Link do Vídeo de Funcionamento:



## 📞 Contato

- 👤 **Autor**: Alana Almeida, Brunna Barreto, Cauã Luís Santos, Erick de Sousa, Jonas Souza, Kleber Marçal, Luiz Eduardo e Raiane Damascena 
 
- 📧 **E-mail**:alanaalmeida2004@gmail.com, 20241bsifsa0027@ifba.edu.br, caualuis2012@hotmail.com, Erickvestas@gmail.com, Jonassouza871@hotmail.com, Kleber.sm@gmail.com, luizeduardosoaresferreira942@gmail.com e rai.paixao2012@gmail.com

--- 
