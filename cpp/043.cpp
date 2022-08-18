#include <iostream>
#include <vector>
#include <array>
#include <numeric>
#include <algorithm>

int digit_count(long int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n/=10;
    }
    return count;
}

long int _pow(int b, int e) {
    long int output = 1;
    for (int i = 0; i < e; i++) {
        output*=b;
    }
    return output;
}

std::vector<int> get_digits(long int n) {
    std::vector<int> output;
    while (n != 0) {
        output.push_back(n%10);
        n /= 10;
    }
    return output;
}

bool is_pandigital(long int n) {
    int d[10] = {0};
    while (n != 0) {
        int m = n % 10;
        d[m] = 1;
        n /= 10;
    }
    return ((d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8]+d[9]) == 10);
}

long int concat_digits(std::vector<int> d) {
    long int sum = 0;
    for (int i = 0; i < d.size(); i++) {
        sum += (d[i] * _pow(10,d.size()-1-i));
    }
    return sum;
}

int nums[7] = {17,13,11,7,5,3,2};
bool mystery(long int n) {
    std::vector<int> d = get_digits(n);
    for (int i = 0; i < 7; i++) {
        int t = concat_digits({d[i+2],d[i+1],d[i]});
        if (t % nums[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> v = {0,1,2,3,4,5,6,7,8,9};
    unsigned long int sum = 0;
    while (next_permutation(v.begin(),v.end())) {
        if (v[0] != 0) {
            long int n = concat_digits(v);
            if (is_pandigital(n) && mystery(n)) {
                std::cout<<n<<std::endl;
                sum+=n;
            }
        }
    }
    std::cout<<sum<<std::endl;
}
