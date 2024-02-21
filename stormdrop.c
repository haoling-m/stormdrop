#include "stormdrop.h"

uint32_t stormdrop(uint32_t entropy) {
  entropy += entropy << 3;
  entropy ^= ((entropy ^ 1111111111) << 11);
  entropy += entropy << 3;
  entropy ^= (entropy >> 10);
  entropy += entropy << 3;
  return entropy ^ ((entropy >> 1) << 10);
}
