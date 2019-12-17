#include "merge.h"

void merge(int * s, int * z, int * sz) {
  int i = 0;
  int j = 0;
  int k = 0;
  while (i <= IN_SZ-1 || j <= IN_SZ-1) {
    if (j > IN_SZ-1 || (i <= IN_SZ-1 && s[i] <= z[j])) {
      sz[k] = s[i];
      ++i;
    } else {
      sz[k] = z[j];
      ++j;
    }
    ++k;
  }
}
