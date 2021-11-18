#include <iostream>
#include <string>
#include <vector>

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

int main () {
    std::vector<int> digits = {0,1,2,3,4,5,6,7,8,9};
    int size = 10;

    std::string output = "";

    int index = 1000000;
    int perms = factorial(digits.size()-1);

    for (int i = 0; i < size; i++) {
        int pop = (int)(index / perms) % digits.size();

        std::cout << pop << std::endl;

        output += std::to_string(digits[pop]);

        digits.erase(digits.begin() + pop);

        index -= perms;

        perms = factorial(digits.size()-1);

    }
    std::cout << output << std::endl;
}
