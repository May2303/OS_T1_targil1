#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    long double lambda = strtold(argv[1], NULL);
    int k = atoi(argv[2]);

    long double px = expl(-lambda) * powl(lambda, k) / tgammal(k + 1);

    printf("%.20Lf\n", px);

    return 0;
}