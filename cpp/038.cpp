#include <iostream>
#include <array>
#include <numeric>

int digit_count(int n) {
    int count = 0;
    while (n != 0) {
        n/=10;
        count++;
    }
    return count;
}

bool is_pandigital(int n) {
    if (n < 123456789) { return false;}
    std::array<int,9> digits;
    while (n != 0) {
        int m = n % 10;
        if (m != 0) {
            digits[m-1] = 1;
        } else {
            return false;
        }
        n /= 10;
    }
    return (std::accumulate(digits.begin(),digits.end(),0) == 9);
}

int _pow(int b, int e) {
    int output = 1;
    for (int i = 0; i < e; i++) {
        output *= b;
    }
    return output;
}

int concat_num(int n1, int n2) {
    if (n1 == 0) {return n2;}
    return n2 + (n1 * _pow(10,digit_count(n2)));
}

int pandigital_multiples(int n) {
    int total_digits = 0;
    int i = 1;
    int num = 0;
    while (total_digits < 9) {
        num = concat_num(num,n*i);
        total_digits += digit_count(n * i);
        i++;
    }
    if (total_digits == 9 && is_pandigital(num)) {
        return num;
    }
    return -1;
}

int main () {
    
    int max = 0;
    for (int i = 1; i < 10000; i++) {
        int p = pandigital_multiples(i);
        std::cout << i << ": " << p << std::endl;
        if (p > max) {
            max = p;
        }
    }
    std::cout<<max<<std::endl;
    
}
