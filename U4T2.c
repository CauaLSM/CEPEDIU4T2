#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/time.h"


#include "U4T2.h"

void initGpio() {
  gpio_init(LED_AZUL);
  gpio_init(LED_VERDE);
  gpio_init(LED_VERMELHO);
  // gpio_init(BUZZER);

  gpio_set_dir(LED_AZUL, GPIO_OUT);
  gpio_set_dir(LED_VERDE, GPIO_OUT);
  gpio_set_dir(LED_VERMELHO, GPIO_OUT);
}


int main() {
  stdio_init_all();

  initGpio();
  initNeoPixel();

  while (!tud_cdc_connected()){
    sleep_ms(100);
  }


  while(true) {
    int numero;
    printf("Digite um número de 0 a 9 e pressione enter: ");
    scanf("%d", &numero);
    printf("%d\n", numero);

    switch(numero) {
      case 0:
        renderMatrix(CHAR_0);
        break;
      case 1:
        renderMatrix(CHAR_1);
        break;
      case 2:
        renderMatrix(CHAR_2);
        break;
      case 3:
        renderMatrix(CHAR_3);
        break;
      case 4:
        renderMatrix(CHAR_4);
        break;
      case 5:
        renderMatrix(CHAR_5);
        break;
      case 6:
        renderMatrix(CHAR_6);
        break;
      case 7:
        renderMatrix(CHAR_7);
        break;
      case 8:
        renderMatrix(CHAR_8);
        break;
      case 9:
        renderMatrix(CHAR_9);
        break;
      default:
        break;
    }
  }
}
