#include <ctime>
#include <vector>
#include <cstdlib>
#include <iostream>

int sumUnevenIndexes(const std::vector<int> &seq) {
  int sum = 0;

  for (int i = 0; i < seq.size(); ++i) {
    const auto n = seq[i];

    if (i % 2 != 0) {
      sum += n;
    }
  }

  return sum;
}

int main() {
  srand(time(0));

  const int rand1 = rand() % 101 - rand() % 101;
  const int rand2 = rand() % 101 - rand() % 101;
  const int rand3 = rand() % 101 - rand() % 101;
  const int rand4 = rand() % 101 - rand() % 101;

  std::cout << "sumUnevenIndexes({ " 
            << rand1 << ", "
            << rand2 << ", "
            << rand3 << ", "
            << rand4 << " }): "
            << sumUnevenIndexes({ rand1, rand2, rand3, rand4 })
            << std::endl;

  return EXIT_SUCCESS;
}
