#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  stdio_init_all();
  setup_default_uart();
  while(1)
  {
    printf("Hello, world!\n");
    sleep_ms(500);
  }
  return 0;
}

