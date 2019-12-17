#include "common.h"

void sort(int * a, int len) {
  for (int i = 0; i < len; ++i) {
    for (int j = i; j > 0 && a[j-1] > a[j]; --j) {
      swap(&a[j-1], &a[j]);
    }
  }
}

void shift(int * a, int len) {
  int tmp = a[len-1];
  for (int i = len-1; i > 0; --i) {
    a[i] = a[i-1];
  }
  a[0] = tmp;
}

void reverse(int * a, int len) {
  for (int i = 0; i < len/2; ++i) {
    swap(&a[i], &a[len-i-1]);
  }
}
