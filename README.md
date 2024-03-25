# StormDrop
![StormDrop Logo](https://repository-images.githubusercontent.com/743602480/00d0e520-07e5-4dee-99f2-eaa277a8691e)

## Description
StormDrop is a 32-bit, pseudo-random number generator algorithm.

Read [this article](https://medium.com/@williamstaffordparsons/stormdrop-is-a-new-32-bit-prng-that-passes-statistical-tests-with-efficient-resource-usage-59b6d6d9c1a8) for an in-depth explanation.

## License
StormDrop is subject to the software licensing terms from the [LICENSE file](https://github.com/williamstaffordparsons/stormdrop/blob/master/LICENSE).

## Reference
#### `stormdrop()`
This is the pseudo-randomization function that accepts the 2 following arguments.

`state` is an array with 4 32-bit unsigned integers initialized with any value. The first 32 bits and last 64 bits are suitable for additional pseudo-random bits.

`entropy` is a 32-bit unsigned integer initialized with any value and defined subsequently with the previous pseudo-random number result.

The return value data type is `uint32_t`.

It returns the 32-bit unsigned integer pseudo-random number result.

## Usage
``` c
#include <time.h>
#include "stormdrop.h"

int main(void) {
  struct timespec stormdrop_time;
  uint32_t state[4] = {0, 0, 0, 0};
  uint32_t entropy;

  if (clock_gettime(CLOCK_REALTIME, &stormdrop_time) == 0) {
    state[0] = stormdrop_time.tv_nsec;
    entropy = stormdrop(state, stormdrop_time.tv_nsec);
  }

  return 0;
}
```
