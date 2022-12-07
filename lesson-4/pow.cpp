#include <cmath>
#include <cstdlib>
#include <iostream>

int pow(const int &a, const int &b) {
  if (b < 1) {
    return 1;
  }

  int result = a;

  for (int i = 1; i < b; ++i) {
    result *= a;
  }

  return result;
}

int main() {
  std::cout << "pow(3, 5): " << pow(3, 5) << std::endl
            << "pow(2, 4): " << pow(2, 4) << std::endl;

  return EXIT_SUCCESS;
}
