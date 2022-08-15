#include <iostream>
#include <vector>
#include <algorithm>

int min (int a, int b) {
    return a < b ? a : b;
}

int pcount(int p) {
    std::vector<int> v;
    int c = 0;

    for (int n = 1; n <= p/2; n++) {
        for (int m = n; m <= p/2; m++) {   
            for (int l = m; l <= p/2; l++) {
                if (n+m+l == p && n*n + m*m == l*l) {
                    //std::cout << n << ", " << m << ", " << l << std::endl;
                    c++;
                }
            }
        }
    }
    return c;
}

int main() {
    int max_p = 0;
    int max_c = 0;
    for (int p = 2; p < 1000; p+=2) {
        int c = pcount(p);
        if (c > max_c) {
            max_c = c;
            max_p = p;
        }
    }
    std::cout << max_p << std::endl;
    
    //std::cout << pcount(120) << std::endl;
}
