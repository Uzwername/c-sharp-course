#include <ctime>
#include <vector>
#include <cstdlib>
#include <iostream>

int countEvens(const std::vector<int> &seq) {
  int evensCount = 0;

  for (const auto &n : seq) {
    if (n % 2 == 0) {
      ++evensCount;
    }
  }

  return evensCount;
}

int main() {
  srand(time(0));

  const int rand1 = 100 + rand() % 899;
  const int rand2 = 100 + rand() % 899;
  const int rand3 = 100 + rand() % 899;
  const int rand4 = 100 + rand() % 899;

  std::cout << "countEvens({ "
            << rand1 << ", "
            << rand2 << ", "
            << rand3 << ", "
            << rand4 <<" }): "
            << countEvens({ rand1, rand2, rand3, rand4 })
            << std::endl;

  return EXIT_SUCCESS;
}
