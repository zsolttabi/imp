#include <stdio.h>

#include "merge.h"

int main(int argc, char const **argv) {
  
  int a[IN_SZ];
  int b[IN_SZ];
  int c[OUT_SZ];

  for (int i = 0; i < IN_SZ; ++i) {
    a[i] = i * 2;
    b[i] = i * 3;
  }
  merge(a, b, c);

  for (int i = 0; i < OUT_SZ; ++i) {
    printf("%d ", c[i]);
  }
  printf("\n");
  return 0;
}
