#include "functions.h"

void Ligar_led_azul(){
    gpio_put(LED_VERDE,0);
    gpio_put(LED_VERMELHO,0);
    gpio_put(LED_AZUL,1);
   
    sleep_ms(2000);
}
