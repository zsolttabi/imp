#include <stdio.h>

#include "common.h"

void swap(int * a, int * b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void print_arr(char * name, int *a, int len) {
  printf("%s = { ", name);
  for (int i = 0; i < len; ++i) {
    printf("%d", a[i]);
    if (i < len-1) {
       printf(", ");
    }
  }
  printf(" }\n");
}
