#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>

std::string serializeIntVector(const std::vector<int> &ivec) {
  std::string serializedSeq = "";

  const auto endIterator = ivec.cend();
  const auto lastIterator = endIterator - 1;
  for (auto i = ivec.cbegin(); i != endIterator; ++i) {
    if (i != lastIterator) {
      serializedSeq += std::to_string(*i) + ", ";
    } else {
      serializedSeq += std::to_string(*i);
    }
  }

  return serializedSeq;
}

std::vector<int> findEvenSeqUntil(const int &n) {
  std::vector<int> evens = {};

  for (int i = 1; i <= n; ++i) {
    if (i % 2 == 0) {
      evens.push_back(i);
    }
  }

  return evens;
}

int main() {
  std::cout << "findEvenSeqUntil(5): " << serializeIntVector(findEvenSeqUntil(5)) << std::endl
            << "findEvenSeqUntil(8): " << serializeIntVector(findEvenSeqUntil(8)) << std::endl;

  return EXIT_SUCCESS;
}
