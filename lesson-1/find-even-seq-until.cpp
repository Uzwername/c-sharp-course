#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>

std::string serializeIntVector(std::vector<int> ivec) {
  std::string out = "";

  for (auto i = ivec.begin(); i != ivec.end(); i++) {
    const auto preLastIterator = ivec.end() - 1;
    if (i != preLastIterator) {
      out += std::to_string(*i) + ", ";
    } else {
      out += std::to_string(*i);
    }
  }

  return out;
}

std::vector<int> findEvenSeqUntil(int n) {
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
