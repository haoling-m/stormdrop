#include "stormdrop.h"

void stormdrop(uint32_t *entropy) {
  entropy[1] ^= entropy[1] << 19;
  entropy[1] ^= entropy[1] >> 3;
  (entropy[0])++;
  entropy[1] ^= (entropy[0] + entropy[1]) << 6;
  entropy[1] ^= entropy[1] >> 7;
  entropy[1] ^= (entropy[1] << 5) | 1;
}
