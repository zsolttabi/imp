
#include <stdio.h>

int reverse(int num);

int main() {
  
  int orig;
  printf("Enter a number: ");
  scanf("%d", &orig);
  
  printf("The reversed number: %d\n", 
    reverse(orig));

  return 0;
}

int reverse(int num) {
  int reversed = 0;
  while (0 < num) {
    reversed *= 10;
    reversed += num % 10;
    num /= 10;
  }
  return reversed;
}
