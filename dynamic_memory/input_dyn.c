#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "common.h"
#include "sort.h"

#define GROWTH_RATE 2

int main() {

  unsigned int capacity = 2;
  unsigned int size = 0;
  int * buf = malloc(capacity * sizeof(int));
  if (NULL == buf) {
    printf("malloc failed\n");
    exit(1);
  }

  printf("input digits or EOF\n");
  while (scanf("%d", &buf[size]) != EOF) {
    ++size;
    if (size == capacity) {
      int * tmp_buf = realloc(buf, capacity * GROWTH_RATE * sizeof(int));
      if (NULL == tmp_buf) {
        printf("malloc failed\n");
        exit(1);
      }
      buf = tmp_buf;
      capacity *= GROWTH_RATE;
    }
  }

  sort(buf, size);
  print_arr("buf", buf, size);

  free(buf);
}
