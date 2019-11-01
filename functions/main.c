#include <stdio.h>
#include <stdbool.h>

#include "fact.h"
#include "prime.h"
#include "swap.h"

int main(int argc, char const *argv[]) {

  unsigned int n; 
  do {
    printf("Give me a number [0-20]: ");
    scanf("%u", &n);
  } while (n > 20);

  printf("fact of %u = %llu\n", n, fact((unsigned char)n));
  printf("%u is %s\n", n, 
    is_prime(n) ? "a prime" : "not a prime");
  
  int _a = 1;
  int _b = 2;
  swap(&_a, &_b);
  printf("_a = %d, _b = %d\n", _a, _b);

  int i = 12;
  int *ip = &i;
  int *np = NULL;

  printf("&i = %p\n", &i); 
  printf("ip = %p\n", ip);
  printf("*ip = %d\n", *ip);
  printf("np = %p\n", np);
  printf("&np = %p\n", &np);

  char s1[10] = "hello";
  char s2[10] = "world";

  swap_array(s1, s2, 10);
  printf("s1 = %s, s2 = %s \n", s1, s2);

  return 0;
}
