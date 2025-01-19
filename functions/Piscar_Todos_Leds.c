#define functions.h

void Ligar_tres_leds()
{
  gpio_put(LED_VERDE,1);
  gpio_put(LED_VERMELHO,1);
  gpio_put(LED_AZUL,1);
  sleep_ms(2000);
}
