#include "functions.h"

void Acionar_Buzzer() {
    // Ativar o buzzer
    gpio_put(BUZZER,1);  

    // Espera de 2 segundos
    sleep_ms(2000);  

    // Desativar o buzzer
    gpio_put(BUZZER, 0);
    sleep_ms(100);
}
