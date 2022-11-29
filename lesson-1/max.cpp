#include <limits>
#include <initializer_list>
#include <cstdlib>
#include <iostream>

int max(std::initializer_list<int> numbers) {
  int max = std::numeric_limits<int>::min();

  for (const auto &n : numbers) {
    if (n > max) {
      max = n;
    }
  }

  return max;
}

int main() {
  std::cout << "max({5, 7}): " << max({5, 7}) << std::endl
            << "max({2, 10}): " << max({2, 10}) << std::endl
            << "max({-9, -3}): " << max({-9, -3}) << std::endl
            << "max({2, 3, 7}): " << max({2, 3, 7}) << std::endl
            << "max({44, 5, 78}): " << max({44, 5, 78}) << std::endl
            << "max({22, 3, 9}): " << max({22, 3, 9}) << std::endl;

  return EXIT_SUCCESS;
}
