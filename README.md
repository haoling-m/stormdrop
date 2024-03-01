# StormDrop
![StormDrop Logo](https://repository-images.githubusercontent.com/743602480/00d0e520-07e5-4dee-99f2-eaa277a8691e)

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
  uint32_t entropy;

  clock_gettime(CLOCK_REALTIME, &stormdrop_time);
  entropy = stormdrop(stormdrop_time.tv_nsec);
  printf("%u\n", entropy);
  entropy = stormdrop(entropy);
  printf("%u\n", entropy);
  entropy = stormdrop(entropy);
  printf("%u\n", entropy);
  return 0;
}
```

## Reference
#### `stormdrop()`
This is the pseudo-randomization function that accepts the following argument.

`entropy` is a 32-bit unsigned integer initialized with any value or the previous pseudo-random number result.

The return value data type is `uint32_t`.

It returns the 32-bit unsigned integer pseudo-random number result.

## Support
StormDrop was designed and developed by [Wil Parsons](https://github.com/wilparsons).

I'm available for freelance work to extend, implement or modify StormDrop and other algorithms.
