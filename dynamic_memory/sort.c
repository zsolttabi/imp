#include "common.h"
#include "sort.h"

void sort(int * a, int len) {
  for (int i = 0; i < len; ++i) {
    for (int j = i; j > 0 && a[j-1] > a[j]; --j) {
      swap(&a[j-1], &a[j]);
    }
  }
}
