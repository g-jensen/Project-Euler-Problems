#include <iostream>
#include <array>

int count = 0;
std::array<int,8> coins = {200,100,50,20,10,5,2,1};

void coin_recurse(int acc) {
    if (acc == 200) {
        count++;
    }
    else if (acc < 200) {
        for (auto c: coins) {
            std::cout<<c<<std::endl;
            coin_recurse(acc+c);
        }
    }
}

int main () {
    coin_recurse(0);
    std::cout<<count<<std::endl;
}
