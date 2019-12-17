#include <stdlib.h>
#include <stdio.h>

int main() {
  int sz;
  printf("size: ");
  scanf("%d", &sz);
  if (sz <= 0) {
    printf("size must be positive\n");
    exit(1);
  }
  int * a = malloc(sz * sizeof(int));
  if (NULL == a) {
    printf("malloc failed\n");
    exit(1);
  }

  for (int i = 0; i < sz; ++i) {
    printf("%dth elem: ", i+1);
    scanf("%d", &a[i]);
  }

  for (int i = sz-1; i >= 0; --i) {
    printf("%dth elem: %d\n", i+1, a[i]);
  }

  free(a);
  return 0;
}
