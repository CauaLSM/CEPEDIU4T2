// Ligar led Vermelho
#include "functions.h"

void Ligar_led_Vermelho(){
    gpio_put(LED_VERMELHO,1);
    gpio_put(LED_VERDE,0);
    gpio_put(LED_AZUL,0);
    
    }