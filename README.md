# StormDrop
![StormDrop Logo](https://repository-images.githubusercontent.com/743602480/14910e7c-11ea-4615-ab60-b7e44cf217ef)

## Description
StormDrop is a 32-bit, pseudo-random number generator algorithm.

Read [this article](https://medium.com/@williamstaffordparsons/stormdrop-is-a-new-32-bit-prng-that-passes-statistical-tests-with-efficient-resource-usage-59b6d6d9c1a8) for an in-depth explanation.

## License
StormDrop is subject to the software licensing terms from the [LICENSE file](https://github.com/williamstaffordparsons/stormdrop/blob/master/LICENSE).

The non-refundable, one-time fee can be paid with [this link](https://www.paypal.com/ncp/payment/H3QSJRFHDQKPS).

## Reference
#### `stormdrop()`
This is the pseudo-randomization function that accepts the following argument.

`state` is an array with 4 32-bit unsigned integers initialized with any value.

The return value data type is `uint32_t`.

It returns the 32-bit unsigned integer pseudo-random number result from `state[3]`.

## Usage
``` c
#include "stormdrop.h"

int main(void) {
  uint32_t state[4] = {0, 0, 0, 0};
  uint32_t entropy;

  entropy = stormdrop(state);
  return 0;
}
```
