#include <stdbool.h>
#include "prime.h"

bool is_prime(unsigned long n) {
  if (n < 2) {
    return false;
  }
  for (unsigned long i = 2; i < n/2; ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
