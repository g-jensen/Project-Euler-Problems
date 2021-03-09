#include <iostream>
#include <cmath>

int main () {
    for (int a = 0; a < 1000; a++) {
        for (int b = 0; b < 1000; b++) {
            for (int c = 0; c < 1000; c++) {
                if (a < b && (b < c)) {
                    if (a + b + c == 1000) {
                        if (pow(a,2) + pow(b,2) == pow(c,2)) {
                            std::cout << a * b * c << std::endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
}
