#include <iostream>
#include <cmath>

int getDivCount (int num) {
  int count = 0;
  for (int i = 1; i <= std::sqrt(num); i++) {
    if (num % i == 0) {
      count++;
    }
  }
  return count;
}


int main () {
  int sum = 0;
  for (int i = 1; true; i++) {
    sum += i;
    if (getDivCount(sum) > 500/2) {
      std::cout << sum << std::endl;
      return 0;
    }
  }
}
