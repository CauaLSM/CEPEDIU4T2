#include "functions.h"

void Acionar_Buzzer() {
    // Ativar o buzzer
    play_tone(BUZZER,1000,2000);

    // Espera de 2 segundos
    sleep_ms(6000);  
    gpio_put(BUZZER,0);

    // Desativar o buzzer
   
}
