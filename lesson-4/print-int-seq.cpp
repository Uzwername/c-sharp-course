#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>

void printIntSeq(const std::vector<int> &seq) {
  std::string stringifiedSeq = "";

  const auto endIterator = seq.cend();
  const auto lastIterator = endIterator - 1;
  for (auto i = seq.cbegin(); i != endIterator; ++i) {
    if (i != lastIterator) {
      stringifiedSeq += std::to_string(*i) + ", ";
    } else {
      stringifiedSeq += std::to_string(*i);
    }
  }

  std::cout << '[' << stringifiedSeq << ']' << std::endl;
}

int main() {
  printIntSeq({ 6, 1, 33 });
  printIntSeq({ 1, 2, 5, 7, 19 });
  printIntSeq({ 1, 2, 3, 4, 5, 6, 7, 8 });

  return EXIT_SUCCESS;
}
