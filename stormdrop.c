#include "stormdrop.h"

uint32_t stormdrop(uint32_t *state) {
  uint32_t entropy;
  state[0] += 1111111111;
  entropy = state[0] ^ ((state[1] << 21) | (state[1] >> 11));
  state[1] = ((state[2] << 13) | (state[2] >> 19)) + entropy;
  state[2] = state[0] + entropy;
  return state[2];
}
