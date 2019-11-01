#include "swap.h"

// (1)
// 0x01: | 1    | i (int)
// 0x02: | 2    | j (int)
// 0x03: | 0x01 | a (int*)
// 0x04: | 0x02 | b (int *)
// 0x05: | 1    | tmp (int)

// (2)
// 0x01: | 2    | i (int)
// 0x02: | 2    | j (int)
// 0x03: | 0x01 | a (int*)
// 0x04: | 0x02 | b (int *)
// 0x05: | 1    | tmp (int)

// (3)
// 0x01: | 2    | i (int)
// 0x02: | 1    | j (int)
// 0x03: | 0x01 | a (int*)
// 0x04: | 0x02 | b (int *)
// 0x05: | 1    | tmp (int)

void swap(int * a, int * b) {
  int tmp = *a; // (1)
  *a = *b; // (2)
  *b = tmp; // (3)
}

void swap_array(char * arr1, char * arr2, int len) {
  for (int i = 0; i < len; ++i) {
    int tmp = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = tmp;
    // swap(&arr1[i], &arr2[i]);
  }
}
