#include <iostream>
#include <math.h>
#include "math_lib/funcs.h"

#define primecount 168

// assuming b is prime
int consecutivePrimes(int a, int b) {
    int output = b;
    int n = 1;
    while (isPrime(output)) {
        output = (n*n) + (n * a) + b;
        n++;
    }
    return n;
}

int main () {
    int primes[primecount] = {0};
    int index = 0;
    for (int i = 2 ; i < 1000; i++) {
        if (isPrime(i)) {
            primes[index] = i;
            index++;
        }
    }

    int max = 0;
    int maxa = 0;
    int maxb = 0;
    for (int m = 0; m < 4; m++) {
        int coef1 = 1;
        int coef2 = 1;
        if (m == 1) {coef1 = -1; coef2 = -1;}
        if (m == 2) {coef1 = -1;}
        if (m == 3) {coef2 = -1;}

        for (int i = 0; i < 1000; i++) {
            for (int k = 0 ; k < primecount; k++) {
                int c = consecutivePrimes(i * coef1,primes[k] * coef2);
                if (c >= max) {
                    max = c;
                    maxa = i * coef1;
                    maxb = primes[k] * coef2;
                }
            }
        }

    }
    std::cout << max << ": " << maxa << ", " << maxb << std::endl;
    std::cout << maxa * maxb << std::endl;

}
