#include "fact.h"

unsigned long long fact(unsigned char n) {
  if (n < 2) return 1;
  return n * fact(n-1);
}
