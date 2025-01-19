#include <stdint.h>
#include <stdio.h>

// Defina o endereço de controle do buzzer, se necessário
#define BUZZER_PIN 5  // Exemplo: GPIO 5, modifique conforme a pinagem real

// Função para configurar o buzzer
void configurar_buzzer(void) {
    // Configurar o pino do buzzer como saída
    // Código específico do microcontrolador (Exemplo para um GPIO)
    // Supondo que a função "configurar_gpio" esteja disponível
    configurar_gpio(BUZZER_PIN, SAIDA);
}

// Função para acionar o buzzer por 2 segundos
void acionar_buzzer(void) {
    // Ativar o buzzer
    digital_write(BUZZER_PIN, ALTO);  // Defina o nível para ativar o buzzer

    // Espera de 2 segundos
    delay_ms(2000);  // Função de delay de 2 segundos, pode depender do sistema

    // Desativar o buzzer
    digital_write(BUZZER_PIN, BAIXO);  // Defina o nível para desativar o buzzer
}
