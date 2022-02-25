#include "math_lib/funcs.h"
#include <iostream>
int main() {
    std::set<double> answer;
    for (double a = 2; a <= 100; a++) {
        for (double b = 2; b <= 100; b++) {
            answer.insert(pow(a,b));
        }
    }
    std::cout << answer.size() << std::endl;
}
