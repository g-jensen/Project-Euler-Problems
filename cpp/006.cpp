#include <iostream>
#include <cmath>

float sumOfSquares (int number) {
    int sum = 0;
    for (int i = 0; i <= number; i++) {
        sum += pow(i,2);
    }
    return sum;
}

int squareOfSums (int number) {
    int sum = 0;
    for (int i = 0; i <= number; i++) {
        sum += i;
    }
    return pow(sum,2);
}


int main () {
    std::int64_t diff = squareOfSums(100) - sumOfSquares(100);
    std::cout << diff << std::endl;
}
