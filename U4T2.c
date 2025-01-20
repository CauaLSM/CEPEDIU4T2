#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/time.h"


#include "U4T2.h"


int main() {
  gpio_init(LED_VERDE);     
    gpio_init(LED_AZUL);
    gpio_init(LED_VERMELHO);  
    gpio_init(BUZZER);

    gpio_set_dir(LED_VERDE, GPIO_OUT);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);       
    gpio_set_dir(LED_AZUL,GPIO_OUT);
    gpio_set_dir(BUZZER, GPIO_OUT);

   

        while(true){
          Ligar_led_verde();
          Ligar_led_azul();
          Ligar_led_vermelho();
          Ligar_tres_leds();
          desligar_tudo();
          Acionar_Buzzer();
          }
}

