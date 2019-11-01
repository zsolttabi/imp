#include <stdio.h>

int main() {
  
  int n;
  int orig;
  int reversed = 0;

  printf("Enter a number: ");
  scanf("%d", &orig);

  for (; 0 < orig ; orig /= 10) {
    reversed *= 10;
    reversed += orig % 10;
  }

  printf("The reversed number: %d\n", reversed);

  return 0;
}
