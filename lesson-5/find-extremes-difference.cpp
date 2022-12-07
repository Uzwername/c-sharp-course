#include <ctime>
#include <vector>
#include <limits>
#include <cstdlib>
#include <iostream>

int findExtremesDifference(const std::vector<int> &sequence) {
  const auto sequenceSize = sequence.size();

  if (sequenceSize < 2) {
    return 0;
  }

  int min = std::numeric_limits<int>::max();
  int max = std::numeric_limits<int>::min();

  for (const auto &n : sequence) {
    if (n > max) {
      max = n;
    }

    if (n < min) {
      min = n;
    }
  }

  return max - min;
}

int main() {
  srand(time(0));

  const int rand1 = rand() % 101;
  const int rand2 = rand() % 101;
  const int rand3 = rand() % 101;
  const int rand4 = rand() % 101;
  const int rand5 = rand() % 101;

  std::cout << "findExtremesDifference({ " 
            << rand1 << ", "
            << rand2 << ", "
            << rand3 << ", "
            << rand4 << ", "
            << rand5 <<" }): "
            << findExtremesDifference({ rand1, rand2, rand3, rand4, rand5 })
            << std::endl;

  return EXIT_SUCCESS;
}
