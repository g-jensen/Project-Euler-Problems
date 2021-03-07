#include <iostream>
#include <cmath>

bool isPrime (int number) {
    for (int i = 2; i <= std::sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {
    int counter = 0;
    for (int i = 0; true; i++) {
        if (isPrime(i)) {
            counter++;
        }
        if (counter == 10001) {
            std::cout << i << std::endl;
            return 0;
        }
    }
}
