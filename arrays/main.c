#include <stdio.h>

#include "common.h"
#include "arrayops.h"

int main() {
  int arr[] = {12,42,23,314,0};
  int len = sizeof(arr)/sizeof(arr[0]);
  shift(arr, len);
  for (int i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }
	printf("\n");
  reverse(arr, len);
  for (int i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
