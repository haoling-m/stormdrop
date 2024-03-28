#include "stormdrop.h"

uint32_t stormdrop(uint32_t *state) {
  uint32_t entropy;
  state[0] += 1111111111;
  entropy = state[0] ^ ((state[2] << 21) | (state[2] >> 11));
  state[1] = entropy;
  state[2] = ((state[3] << 13) | (state[3] >> 19)) + entropy;
  state[3] = state[0] + entropy;
  return state[3];
}
