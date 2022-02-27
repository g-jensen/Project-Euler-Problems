#include "math_lib/funcs.h"
#include <iostream>

int main () {
    int s = 0;
    for (int i = 10; i < 295245; i++) {
        auto digits = getdigits(i);
        int sum = 0;
        for (auto d: digits) {
            sum += pow(d,5);
        }
        if (sum == i) { s += sum; }
    }
    std::cout << s << std::endl;
}
