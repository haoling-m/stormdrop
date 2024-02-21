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
  uint32_t entropy = stormdrop(time((void *) 0));

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

`entropy` is the 32-bit unsigned integer seed initialized with a value.

The return value data type is `uint32_t`.

It returns the 32-bit unsigned integer pseudo-random number result.

## Support
StormDrop was designed and developed by [Wil Parsons](https://wilparsons.com/).

I'm available for freelance work to extend, implement or modify StormDrop and other algorithms.
