#include <string>
#include <cstdlib>
#include <iostream>

int getSecond(const int &n) {
  const std::string numberAsString = std::to_string(n);

  if (numberAsString.size() < 2) {
    return -1;
  }

  std::string secondAsString(1, numberAsString[1]);

  return std::stoi(secondAsString);
}

int main() {
  std::cout << "getSecond(456): " << getSecond(456) << std::endl
            << "getSecond(782): " << getSecond(782) << std::endl
            << "getSecond(918): " << getSecond(918) << std::endl;

  return EXIT_SUCCESS;
}
