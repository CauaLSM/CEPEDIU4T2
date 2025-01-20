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

    gpio_set_function(BUZZER, GPIO_FUNC_PWM);
    uint slice_num = pwm_gpio_to_slice_num(BUZZER);
    pwm_config config = pwm_get_default_config();
    pwm_config_set_wrap(&config, PWM_WRAP);
    pwm_init(slice_num, &config, true);

        while(true){
          Ligar_led_verde();
          Ligar_led_azul();
          Ligar_led_vermelho();
          Ligar_tres_leds();
          desligar_tudo();
          Acionar_Buzzer();
          }
}

