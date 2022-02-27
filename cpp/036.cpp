#include <iostream>
#include <string>
#include <algorithm>

unsigned long int decimalToBinary(int n) {
    std::string output = "";
    while (n / 2 != 0) {
        output += std::to_string(n % 2);
        n /= 2;
    }
    output += std::to_string(n % 2);
    std::reverse(output.begin(),output.end());
    return stoul(output);
}

bool isPalindrome(std::string n) {
    std::string s = n;
    reverse(n.begin(),n.end());
    return s == n;
}

int main () {
    unsigned long int sum = 0;
    for (int i = 0; i < 1000000; i++) {
        unsigned long int b = decimalToBinary(i);
        if (isPalindrome(std::to_string(b)) && isPalindrome(std::to_string(i))) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
}
