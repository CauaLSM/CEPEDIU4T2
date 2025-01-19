#include <stdint.h>
#include <stdio.h>

// Defina o endereço de controle do buzzer
#define BUZZER_PIN 5  

// Função para configurar o buzzer
void configurar_buzzer(void) {
    configurar_gpio(BUZZER_PIN, SAIDA);
}

// Função para acionar o buzzer por 2 segundos
void acionar_buzzer(void) {
    // Ativar o buzzer
    digital_write(BUZZER_PIN, ALTO);  

    // Espera de 2 segundos
    delay_ms(2000);  

    // Desativar o buzzer
    digital_write(BUZZER_PIN, BAIXO); 
}
