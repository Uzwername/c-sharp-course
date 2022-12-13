#include <vector>
#include <cstdlib>
#include <iostream>

std::string serializeDoubleVector(const std::vector<double> &sequence) {
  std::string serializedSequence = "";

  const auto endIterator = sequence.cend();
  const auto lastIterator = endIterator - 1;
  for (auto i = sequence.cbegin(); i != endIterator; ++i) {
    if (i != lastIterator) {
      serializedSequence += std::to_string(*i) + ", ";
    } else {
      serializedSequence += std::to_string(*i);
    }
  }

  return serializedSequence;
}

int main() {
  std::cout << "Please, input b1, k1, b2, k2 sequentially." << std::endl;

  double b1, k1, b2, k2;
  if (!(std::cin >> b1 >> k1 >> b2 >> k2)) {
    std::cout << "Invalid input, please try again." << std::endl;
    return EXIT_FAILURE;
  }

  const double x = (-b2 + b1) / (-k1 + k2);
  const double y = k2 * x + b2;

  std::cout << "[" << serializeDoubleVector({ x, y }) << "]" << std::endl;

  return EXIT_SUCCESS;
}
