#include <cstdlib>
#include <iostream>

void printIntsUntil1(const unsigned &from) {
  if (from == 0) {
    return;
  }

  if (from == 1) {
    std::cout << from << std::endl;

    return;
  }

  std::cout << from << ", ";
  printIntsUntil1(from - 1);
}

int main() {
  printIntsUntil1(5);
  printIntsUntil1(8);
  printIntsUntil1(1);
  printIntsUntil1(0);

  return EXIT_SUCCESS;
}
