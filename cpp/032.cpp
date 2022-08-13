#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> get_digits(int n) {
    std::vector<int> digits;
    while (n / 10 != 0) {
        digits.push_back(n % 10);
        n /= 10;
    }
    digits.push_back(n % 10);
    return digits;
}

void combine_vectors(std::vector<int> &a,std::vector<int> &b) {
    for (int i: b) {a.push_back(i);}
}

bool is_pandigital(std::vector<int>& digits) {
    if (digits.size() != 9) {return false;}
    for (int i = 1; i <= 9; i++) {
        if (!std::count(digits.begin(),digits.end(),i)) {
            return false;
        }
    }
    return true;
}

int main () {
    std::vector<int> products;
    int sum = 0;
    for(int i = 1; i <= 48; i++) {
        for(int k = 1; k <= 1963; k++) {
            int product = i * k;
            if (!std::count(products.begin(),products.end(),product)) {
                std::vector<int> d_i = get_digits(i);
                std::vector<int> d_k = get_digits(k);
                std::vector<int> d_ik = get_digits(product);
                combine_vectors(d_i,d_k);
                combine_vectors(d_i,d_ik);
            
                if (is_pandigital(d_i)) {
                    sum += product;
                    products.push_back(product);
                    for (int g: d_i) {std::cout<<g<<",";}
                    std::cout<<product<<std::endl;
                }
            }
        }
    }
    std::cout << sum << std::endl;

}
