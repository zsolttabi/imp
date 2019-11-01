#include <stdio.h>

/*
 * argc: number of arguments
 * argv: array of arguments (as C-style strings)
 * the first argument is always the invocation command (eg. "./args")
 */
int main(int argc, const char *argv[]) {
  int i;
  /*
   * array indexing always starts at index 0
   * the last valid index is n-1 where n is the size of the array
   */
  for (i = 0; i < argc; ++i) {
    printf("%d.: %s\n", i, argv[i]); /* access to ith element via the [] operator */
  }
  return 0;
}
