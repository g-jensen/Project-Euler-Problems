// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>

int main () {
    const int max = 20;
    for (int i = 1; true; i++) {
        int success = 0;
        for (int k = 1; k <= max; k++) {
            if (i % k == 0) {
                success++;
            } else {
                break;
            }
        }
        if (success == max) {
                std::cout << i << std::endl;
                return 0;
        }
    }
}
