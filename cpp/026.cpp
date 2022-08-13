#include <iostream>
#include <array>

#define max_depth 5000

bool is_valid_cycle(std::array<int,max_depth>&a,int i,int n) {
    for (int k = 1; k < n; k++) {
        int j = 0;
        for (int p = i*k; p < (i*k)+i; p++,j++) {
            if (a[p] != a[j]) {
                return false;
            }
        }
    }
    return true;
}

int get_cycle_count(std::array<int,max_depth>& a) {
    int min = max_depth/2;
    bool d = false;
    for (int i = 7; i <= max_depth/2; i++) {
        int n = a.size()/i;
        if (is_valid_cycle(a,i,n) && i < min) {
            min = i;
            d = true;
        }
    }
    if (!d) {return 0;}
    return min;
}

int main () {
    int max_c = 0;
    int max_d = 0;
    for (int n = 11; n < 1000; n++) {
        int acc = 1;
        std::array<int,max_depth> digits;
        for (int k = 0; k < max_depth; k++) {
            while (n > acc && acc != 0) {
                acc *= 10;
            }
            int s = acc / n;
            digits[k] = s;
            acc -= s*n;
        }
        int gcc = get_cycle_count(digits);
        if(gcc > max_c) {
            max_c = gcc;
            max_d = n;
        }
    }
    std::cout << max_d << std::endl;
}
