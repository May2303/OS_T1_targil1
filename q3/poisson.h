#include <math.h>

// Function declaration for calculating the Poisson distribution
long double poisson(double lambda, int k) {
    return expl(-lambda) * powl(lambda, k) / tgamma(k + 1);
}


