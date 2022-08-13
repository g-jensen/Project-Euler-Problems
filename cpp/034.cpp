#include <iostream>

int main() {
    int factorials[10] = {1,1,2,6,24,120,720,5040,40320,362880};
    int sum = 0;
    for (int i = 9; i < 2800000; i++) {
        int s = 0;
        int n = i;
        while (n != 0) {
            s += factorials[(n % 10)];
            n /= 10;
        }
        if (s == i) {
            sum += s;
        }
    }
    std::cout<<sum<<std::endl;
}
