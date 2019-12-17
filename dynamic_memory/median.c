#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sort.h"
#include "common.h"

double median(int * arr, int len) {
  print_arr("arr", arr, len);

  int * copy = malloc(len * sizeof(int));
  if (NULL == copy) {
    printf("malloc failed\n");
    exit(1);
  }
  
  memcpy(copy, arr, len * sizeof(int));
  sort(copy, len);

  double result;
  if (len % 2 == 0) { // even
    result = (copy[len/2-1] + copy[len/2]) / 2.0;
  } else { // odd
    result = copy[len/2]; 
  }

  free(copy);

  return result;
}

int main() {
  int n;
  printf("array size: ");
  scanf("%d", &n);

  int * a = malloc(n * sizeof(int));
  if (NULL == a) {
    printf("malloc failed\n");
    exit(1);
  }

  for (int i = 0; i < n; ++i) {
    printf("a[i]: " );
    scanf("%d", &a[i]);
  }

  double med = median(a, n);
  printf("the median is: %f\n", med);

  free(a);

  return 0;
}
