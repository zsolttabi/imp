/*
 * Multiplication table printing
 */

#include <stdio.h>

int main() {
  int i; /* loop counter for outer loop */
  int j; /* loop counter for inner loop */
  for (i = 1; i <= 9; ++i) { /* outer for loop */
    for (j = 1; j <= 9; ++j) { /* nested for loop (inner loop) */
      printf("%d x %d = %2d, ", i, j, i*j); /* format specifier with width */
    }
    printf("\n");
  }
  return 0;
}
