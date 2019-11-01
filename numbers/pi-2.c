#include <stdio.h>

#define PRECISION 1000000

int main() {
    int n;
    double pi = 0.0;
    for (n = 0; n < PRECISION; ++n) {
        pi += (n % 2 == 0 ? 1.0 : -1.0) / (2.0 * n + 1);
    }
    pi *= 4;

    printf("pi ~ %f\n", pi);
    return 0;
}
