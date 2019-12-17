#include <stdio.h>

struct real {
  int nom;
  int denom;
};

typedef struct real1 {
  int nom;
  int denom;
} real_t;

int main() {

  struct real r = {1, 2};
  printf("r = { %d, %d }\n", r.nom, r.denom);

  struct real * rp = &r;
  printf("*rp = { %d, %d }\n", rp->nom, rp->denom);

  real_t r2 = { .denom = 2, .nom = 1 };
  printf("r2 = { %d, %d }\n", r2.nom, r2.denom);

  return 0;
}
