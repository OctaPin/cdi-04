#include <stdio.h>
#include "pico/stdlib.h"

int main(void) {
  stdio_init_all();
  gpio_init(25);
  gpio_set_dir(25,true);
  while (true) {
    sleep_ms(500);
    gpio_put(25,!gpio_get(25));    
  }
}
