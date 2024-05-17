#include <stdio.h>
#include "poisson.h"

int main() {
    long double lambdas[] = {1.0, 2.0, 2.0, 3.0, 3.0};
    int k[] = {1, 2, 10, 2, 100};
    int i;
    for (i = 0; i < 5; i++) {
        printf("Value %d: %.20Lf\n", i + 1, poisson(k[i], lambdas[i]));
    }
    return 0;
}
