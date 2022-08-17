#include <iostream>
#include <vector>
#include <numeric>
#include <math.h>

int digit_count(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

bool is_pandigital(int n) {
    int c = digit_count(n);
    std::vector<int> digits(c);
    while (n != 0) {
        int m = n % 10;
        if (m != 0 && m <= c) {
            digits[m-1] = 1;
        } else {
            return false;
        }
        n /= 10;
    }
    return (std::accumulate(digits.begin(),digits.end(),0) == c);
}

bool is_prime(int n) {
    int s = sqrt(n);
    if (n % 2 == 0) {return false;}
    for (int i = 3; i <= s; i+=2) {
        if (n % i == 0) {return false;}
    }
    return true;
}

int main() {
    int max = 0;
    for (int i = 7654321; i >= 1234567; i--) {
        if (is_pandigital(i) && is_prime(i)) {
            std::cout<< i << std::endl;
            return 0;
        }
    }
}
