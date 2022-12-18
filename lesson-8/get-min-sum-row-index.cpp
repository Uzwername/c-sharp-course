#include <cmath>
#include <vector>
#include <cstdlib>
#include <iostream>

int sum(const std::vector<int> &sequence) {
  int total = 0;

  for (const auto &number : sequence) {
    total += number;
  }

  return total;
}

int getMinSumRowIndex(const std::vector<std::vector<int>> &matrix) {
  int minIndex = -1;
  auto min = std::numeric_limits<int>::max();
  for (int i = 0; i < matrix.size(); ++i) {
    const auto &column = matrix[i];
    const auto &columnSum = sum(column);

    if (min > columnSum) {
      min = columnSum;
      minIndex = i;
    }
  }

  return minIndex;
}

int main() {
  std::cout << getMinSumRowIndex({
    { 1, 4, 7, 2 },
    { 5, 9, 2, 3 },
    { 8, 4, 2, 4 },
    { 5, 2, 6, 7 }
  }) << std::endl;

  return EXIT_SUCCESS;
}
