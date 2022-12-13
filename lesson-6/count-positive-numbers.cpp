#include <cstdlib>
#include <iostream>

int main() {
  double currentNumber;
  unsigned positiveNumbersCount = 0;

  /**
  * User will need to type EOF to exit of this loop, e.g. on Windows typing a
  * control-z hold down the Ctrl key and press z followed by hitting either the
  * Enter or Return key. On UNIX systems, including on Mac OS X machines,
  * end-of-file is usually control-d.
  */
  while (std::cin >> currentNumber) {
    if (currentNumber > 0) {
      positiveNumbersCount += 1;
    }
  }

  std::cout << std::endl << "count: " << positiveNumbersCount << std::endl;

  return EXIT_SUCCESS;
}
