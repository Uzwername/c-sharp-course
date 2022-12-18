#include <algorithm>
#include <functional>
#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>

void printIntSequence(const std::vector<std::vector<int>> &sequence) {
  std::string stringifiedSequence = "\n";

  for (const auto &innerSequence : sequence) {
    stringifiedSequence += "  [";

    const auto endIterator = innerSequence.cend();
    const auto lastIterator = endIterator - 1;
    for (auto i = innerSequence.cbegin(); i != endIterator; ++i) {
      if (i != lastIterator) {
        stringifiedSequence += std::to_string(*i) + ", ";
      } else {
        stringifiedSequence += std::to_string(*i);
      }
    }

    stringifiedSequence += "],\n";
  }

  std::cout << "[" << stringifiedSequence << "]" << std::endl;
}

std::vector<std::vector<int>> sortMatrixRows(const std::vector<std::vector<int>> &sequence) {
  std::vector<std::vector<int>> sortedMatrix = {};

  for (auto column : sequence) {
    std::sort(column.begin(), column.end(), std::greater<int>());
    sortedMatrix.push_back(column);
  }

  return sortedMatrix;
}

int main() {
  printIntSequence(
    sortMatrixRows({
      {1, 4, 7, 2},
      {5, 9, 2, 3},
      {8, 4, 2, 4},
    })
  );

  return EXIT_SUCCESS;
}
