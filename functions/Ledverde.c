#include "functions.h"

void Ligar_led_verde()
{
  gpio_put(LED_VERDE,1);
  gpio_put(LED_VERMELHO,0);
  gpio_put(LED_AZUL,0);
  sleep_ms(2000);
}