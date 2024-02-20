#include <stdio.h>
#include <time.h>
#include "stormdrop.h"

int main(void) {
  uint32_t entropy = stormdrop(time((void *) 0));

  printf("%u\n", entropy);
  entropy = stormdrop(entropy);
  printf("%u\n", entropy);
  entropy = stormdrop(entropy);
  printf("%u\n", entropy);
  return 0;
}
