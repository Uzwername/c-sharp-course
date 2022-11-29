#include <cmath>
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

std::vector<int> findCubeSeqUntil(const int &n) {
  std::vector<int> cubes = {};

  for (int i = 1; i <= n; i++) {
    cubes.push_back(
      std::pow(i, 3)
    );
  }

  return cubes;
}

int main() {
  std::cout << "findCubeSeqUntil(3): " << serializeIntVector(findCubeSeqUntil(3)) << std::endl
            << "findCubeSeqUntil(5): " << serializeIntVector(findCubeSeqUntil(5)) << std::endl;

  return EXIT_SUCCESS;
}
