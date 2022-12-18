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

std::vector<std::vector<int>> create4x4SpiralSequence(const int &from = 1) {
  return {
    {from, from + 1, from + 2, from + 3},
    {from + 11, from + 12, from + 13, from + 4},
    {from + 10, from + 15, from + 14, from + 5},
    {from + 9, from + 8, from + 7, from + 6}
  };
}

int main() {
  printIntSequence(create4x4SpiralSequence());

  return EXIT_SUCCESS;
}
