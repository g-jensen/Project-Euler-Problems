#include <iostream>
#include <vector>

bool are_trivial(int a, int b) {
    if (a == b) {return true;}
    if (a%10 == 0 || b%10 == 0) {return true;}
    return false;
}

int main () {
    for (int i = 10; i <= 99; i++) {
        for (int k = i+1; k <= 99; k++) {
            if (!are_trivial(i,k)) {
                std::vector<int> i_d;
                i_d.push_back((i%100)/10); i_d.push_back(i%10);
                std::vector<int> k_d;
                k_d.push_back((k%100)/10); k_d.push_back(k%10);

                bool t = false;
                for (int j = 0; j < 2; j++) {
                    for (int p = 0; p < 2; p++) {
                        if (!t && i_d[j] == k_d[p]) {
                            i_d.erase(i_d.begin()+j);
                            k_d.erase(k_d.begin()+p);
                            t = true;
                        }
                    }
                }

                if (t && (float)i_d[0] / k_d[0] == (float)i/k) {
                    std::cout << i_d[0] << "/" << k_d[0] <<" = "<<i<<"/"<<k<<std::endl;
                }

            }
        }
    }
}
