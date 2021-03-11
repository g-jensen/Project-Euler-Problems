#include <iostream>
#include <cmath>

bool isPrime (int num) {
    for (int i = 2; i <= std::sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {
    long int sum = 0;
    for (int i = 2; i < 2000000; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
}
