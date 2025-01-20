#include "functions.h"

void play_tone(int buzzer_pin, int frequency, int duration_ms) {
    int delay_us = 1000000 / (2 * frequency); // Tempo entre alternâncias (em microsegundos)
    int cycles = (frequency * duration_ms) / 1000; // Número de ciclos para a duração especificada

    for (int i = 0; i < cycles; i++) {
        gpio_put(buzzer_pin, 1); // Liga o buzzer
        sleep_us(delay_us);     // Aguarda metade do período
        gpio_put(buzzer_pin, 0); // Desliga o buzzer
        sleep_us(delay_us);     // Aguarda outra metade do período
    }
}