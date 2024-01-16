#include <stdio.h>
#include <time.h>
#include "entro-shift.h"

int main(void) {
  uint32_t entropy = entro_shift(time((void *) 0));

  printf("%u\n", entropy);
  entropy = entro_shift(entropy);
  printf("%u\n", entropy);
  entropy = entro_shift(entropy);
  printf("%u\n", entropy);
  return 0;
}
