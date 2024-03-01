#include "stormdrop.h"

static uint64_t state = 0;

uint32_t stormdrop(uint32_t entropy) {
  entropy ^= entropy << 19;
  entropy ^= (state ^ entropy) >> 3;
  entropy += entropy << 3;
  state++;
  entropy ^= (state + entropy) << 6;
  entropy ^= entropy >> 7;
  return state ^ (entropy << 5);
}
