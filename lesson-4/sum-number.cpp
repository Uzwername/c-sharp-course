#include <string>
#include <cstdlib>
#include <iostream>

int sumNumber(const int &n) {
  const auto numbers = std::to_string(n);
  int sum = 0;

  for (const auto &numberChar : numbers) {
    const std::string numberString(1, numberChar);

    sum += std::stoi(numberString);
  }

  return sum;
}

int main() {
  std::cout << "sumNumber(452): " << sumNumber(452) << std::endl
            << "sumNumber(82): " << sumNumber(82) << std::endl
            << "sumNumber(9012): " << sumNumber(9012) << std::endl;

  return EXIT_SUCCESS;
}
