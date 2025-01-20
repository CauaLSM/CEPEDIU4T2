#include "functions.h"

void desligar_tudo(){
    gpio_put(LED_VERDE,0);
    gpio_put(LED_VERMELHO,0);
    gpio_put(LED_AZUL,0);
    
    sleep_ms(2000);
}

