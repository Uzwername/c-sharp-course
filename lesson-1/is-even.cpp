#include <string>
#include <cstdlib>
#include <iostream>

std::string convertBoolToString(const bool &flag) {
  return flag ? "true" : "false";
}

bool isEven(const int &n) {
  return n % 2 == 0;
}

int main() {
  std::cout << "isEven(4): " << convertBoolToString(isEven(4)) << std::endl
            << "isEven(-3): " << convertBoolToString(isEven(-3)) << std::endl
            << "isEven(7): " << convertBoolToString(isEven(7)) << std::endl;

  return EXIT_SUCCESS;
}
