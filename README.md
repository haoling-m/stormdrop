# StormDrop
![StormDrop Logo](https://repository-images.githubusercontent.com/743602480/f037cd1e-d089-40fe-82d5-d79d49cbb457)

## Description
StormDrop is a 32-bit, pseudo-random number generator algorithm.

Read [this article](stormdrop-is-a-new-32-bit-prng-that-passes-statistical-tests-with-efficient-resource-usage-59b6d6d9c1a8) for an in-depth explanation.

## Usage
``` c
#include <stdio.h>
#include <time.h>
#include "stormdrop.h"

int main(void) {
  struct timespec stormdrop_time;
  uint32_t entropy[2] = {0, 0};

  clock_gettime(CLOCK_REALTIME, &stormdrop_time);
  entropy[1] = stormdrop_time.tv_nsec;
  stormdrop(entropy);
  printf("%u\n", entropy[1]);
  stormdrop(entropy);
  printf("%u\n", entropy[1]);
  stormdrop(entropy);
  printf("%u\n", entropy[1]);
  return 0;
}
```

## Reference
#### `stormdrop()`
This is the pseudo-randomization function that accepts the following argument.

`entropy` is an array with 2 32-bit unsigned integers. The first is the state initialized at `0` and the second is the pseudo-random number result.

The return value data type is `void`.

## Support
StormDrop was designed and developed by [Wil Parsons](https://github.com/wilparsons).

I'm available for freelance work to extend, implement or modify StormDrop and other algorithms.
