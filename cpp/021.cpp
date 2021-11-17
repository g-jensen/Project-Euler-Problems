#include <iostream>

int amicate (int n) {
    int sum = 0;
    for (int i = 1; i <= (n/2)+1; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

bool isAmicable(int a) {
    int b = amicate(a);
    return amicate(b) == a && a != b;
}

int main () {
    int sum = 0;
    for (int i = 1; i < 10000; i++) {
        if (isAmicable(i)) {
            sum += i;
        }
    }

    std::cout << sum << std::endl;
}
