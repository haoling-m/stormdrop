#include "stormdrop.h"

uint32_t stormdrop(uint32_t entropy) {
  entropy += 11;
  entropy += entropy << 3;
  entropy ^= entropy << 11;
  entropy += entropy << 5;
  entropy ^= entropy >> 10;
  entropy += entropy << 3;
  return ((entropy << 10) ^ entropy) + 11;
}
