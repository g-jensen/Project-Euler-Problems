#include <iostream>

int main () {
    int sum = 1;
    int iteration = 0;
    int number = 1;

    while (iteration < 1000) {
        iteration += 2;
        for (int i = 0; i < 4; i++) {
            number += iteration;
            sum += number;
        }
    }
    std::cout << sum << std::endl;
}
