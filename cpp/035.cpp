#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>


bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

std::vector<int> getDigits(int n) {
    std::vector<int> digits;
    while (n / 10 != 0) {
        digits.push_back(n % 10);
        n /= 10;
    }
    digits.push_back(n % 10);
    std::reverse(digits.begin(),digits.end());
    return digits;
}

int getNum(std::vector<int> digits) {
    int mult = 1;
    int output = 0;
    for (int i = digits.size()-1; i >= 0; i--) {
        output += digits[i] * mult;
        mult *= 10;
    }
    return output;
}

std::vector<int> getRotations(int n) {
    std::vector<int> digits = getDigits(n);
    std::vector<int> output;
    output.push_back(n);
    for (int i = 0; i < digits.size()-1; i++) {
        int first = digits[0];
        digits.erase(digits.begin() + 0);
        digits.push_back(first);
        output.push_back(getNum(digits));
    }
    return output;
}

bool isCircularPrime(int n) {
    std::vector<int> r = getRotations(n);
    for (int i = 0; i < r.size(); i++) {
        if (!isPrime(r[i])) {
            return false;
        }
    }
    return true;
}

int main () {
    int cnt = 0;
    for (int i = 2; i < 1000000; i++) {
        if (isCircularPrime(i)) {
            cnt++;
        }
    }
    std::cout << cnt << std::endl;
}
