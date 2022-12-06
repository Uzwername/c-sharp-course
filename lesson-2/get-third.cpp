#include <string>
#include <cstdlib>
#include <iostream>

int getThird(const int &n) {
  const std::string numberAsString = std::to_string(n);

  if (numberAsString.size() < 3) {
    return -1;
  }

  const std::string thirdAsString(1, numberAsString[2]);

  return std::stoi(thirdAsString);
}

int main() {
  std::cout << "getThird(645): " << getThird(645) << std::endl
            << "getThird(78): " << getThird(78) << std::endl
            << "getThird(32679): " << getThird(32679) << std::endl;

  return EXIT_SUCCESS;
}
