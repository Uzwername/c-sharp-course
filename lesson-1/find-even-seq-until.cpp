#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>

std::string serializeIntVector(const std::vector<int> &ivec) {
  std::string out = "";

  const auto endIterator = ivec.cend();
  for (auto i = ivec.cbegin(); i != endIterator; i++) {
    const auto preLastIterator = endIterator - 1;
    if (i != preLastIterator) {
      out += std::to_string(*i) + ", ";
    } else {
      out += std::to_string(*i);
    }
  }

  return out;
}

std::vector<int> findEvenSeqUntil(const int &n) {
  std::vector<int> evens = {};

  for (int i = 1; i <= n; i++) {
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
