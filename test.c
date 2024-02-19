#include <stdio.h>
#include <time.h>
#include "rainshift.h"

int main(void) {
  uint32_t entropy = rainshift(time((void *) 0));

  printf("%u\n", entropy);
  entropy = rainshift(entropy);
  printf("%u\n", entropy);
  entropy = rainshift(entropy);
  printf("%u\n", entropy);
  return 0;
}
