#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>

const int primecount = 9999999;

/*bool isPrime(int n) {
    if (n <= 1){return false;}
    int s = sqrt(n);
    for (int i = 2; i <= s; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}*/

char* pmap = (char*)malloc(sizeof(char)*primecount);

bool sieve_prime(int n) {
    if (pmap[n] == 0) {
        for (int k = n+n; k <= primecount; k+=n) {
            pmap[k] = 1;
        }
        return 1;
    }
    return 0;
}

int _pow(int b, int e) {
    int output = 1;
    for (int i = 0; i < e; i++) {
        output*=b;
    }
    return output;
}

bool isTruncablePrime(int n) {
    if (n / 10 == 0) {return false;}
    int digit_count = 0;
    int c = n;
    while (c != 0) {
        if (pmap[c] == 1) {
            return false;
        }
        c/=10;
        digit_count++;
    }
    
    c = n;
    for (int i = digit_count-1; i >= 1; i--) {
        c %= _pow(10,i);
        if (pmap[c] == 1) {
            return false;
        }
    }

    return true;
}

int sum = 0;
std::vector<int> t_primes;

void mystery(int n,int c) {
    if (c == 6) {return;}
    if (!std::count(t_primes.begin(),t_primes.end(),n) && isTruncablePrime(n)) {
        t_primes.push_back(n);
        sum += n;
    }
    mystery((n*10)+1,c+1);
    mystery((n*10)+3,c+1);
    mystery((n*10)+7,c+1);
    mystery((n*10)+9,c+1);
}

int main () {
    memset(pmap,0,primecount);
    pmap[0] = 1; pmap[1] = 1; pmap[2] = 0; pmap[3] = 0; pmap[4] = 1;
    for (int i = 1; i < primecount; i++) {
        sieve_prime(i);
    }

    mystery(3,0);
    mystery(7,0);
    mystery(5,0);
    mystery(2,0);
    std::cout<<sum<<std::endl;
    free(pmap);
}
