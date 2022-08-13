/*

Assortment of common functions for project euler problems made by me

*/

#include <algorithm>
#include <math.h>
#include <vector>
#include <numeric>
#include <unordered_map>
#include <set>
#include <iostream>

// https://www.cplusplus.com/reference/algorithm/


template <typename T>
void out(T data) {
    std::cout << data << std::endl;
}

bool isPrime(uint n) {
    if (n < 2) {return false;}
    if (n == 2 || n == 3) {return true;}
    if (n % 2 == 0) {return false;}
    for (uint i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPrime(int n) {
    if (n < 2) {return false;}
    if (n == 2 || n == 3) {return true;}
    if (n % 2 == 0) {return false;}
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// sum of squares from 1 to n
uint sumOfSquares(uint n) {
    return n*(n+1)*(2*n + 1)/6;
}

int sumOfSquares(int n) {
    return n*(n+1)*(2*n + 1)/6;
}

// square of the sum of numbers from 1 to n
uint squareOfSum(uint n) {
    return pow((n+1)*n/2,2);
}

int squareOfSum(int n) {
    return pow((n+1)*n/2,2);
}

// including 1
int factorCount(int n) {
    int count = 1;
    for (int i = 2; i < (n/2)+1; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

// including 1
std::vector<int> getFactors(int n) {
    std::vector<int> out = {1};
    for (int i = 2; i < (n/2)+1; i++) {
        if (n % i == 0) {
            out.push_back(i);
        }
    }
    return out;
}

int amicate(int n) {
    auto v = getFactors(n);
    return std::accumulate(v.begin(),v.end(),0);
}

bool isAmicable(int n) {
    int p = amicate(n);
    return amicate(p) == n && n != p;
}


int factorial(int n) {
    int output = 1;
    if (n <= 1) {
        return output;
    }
    for (int i = 1; i <= n; i++) {
        output *= i;
    }
    return output;
}

std::vector<int> getdigits(int n) {
    std::vector<int> digits;
    while (n / 10 != 0) {
        digits.push_back(n % 10);
        n /= 10;
    }
    digits.push_back(n % 10);
    std::reverse(digits.begin(),digits.end());
    return digits;
}

uint digitcount(uint n) {
    return (uint)(log10(n) + 1);
}

int digitcount (int n) {
    return (int)(log10(abs(n)) + 1);
}
