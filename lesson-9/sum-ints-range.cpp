#include <cstdlib>
#include <iostream>

unsigned sumIntsRange(const unsigned &from, const unsigned &to) {
  if (from > to) {
    return 0;
  }

  if (from == to) {
    return to;
  }

  return from + sumIntsRange(from + 1, to);
}

int main() {
  std::cout << "sumIntsRange(1, 15): " << sumIntsRange(1, 15) << std::endl
            << "sumIntsRange(4, 8): " << sumIntsRange(4, 8) << std::endl
            << "sumIntsRange(8, 8): " << sumIntsRange(8, 8) << std::endl
            << "sumIntsRange(9, 8): " << sumIntsRange(9, 8) << std::endl;
            

  return EXIT_SUCCESS;
}
