#include <ctime>
#include <vector>
#include <string>
#include <cstdlib>
#include <iostream>

void printDoubleSequence(const std::vector<std::vector<double>> &sequence) {
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

std::vector<std::vector<double>> generateDoublesMatrix(const unsigned &rowsNumber, const unsigned &columnsNumber) {
  std::vector<std::vector<double>> doublesMatrix = {};

  for (unsigned i = 0; i < rowsNumber; ++i) {
    std::vector<double> row = {};

    for (unsigned i = 0; i < columnsNumber; ++i) {
      row.push_back(rand() % 101);
    }

    doublesMatrix.push_back(row);
  }

  return doublesMatrix;
}

int main() {
  srand(time(0));

  printDoubleSequence(generateDoublesMatrix(3, 4));

  return EXIT_SUCCESS;
}
