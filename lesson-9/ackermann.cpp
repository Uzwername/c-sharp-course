#include <cstdlib>
#include <iostream>

unsigned ackermann(const unsigned &m, const unsigned &n) {
  if (m == 0 && n == 0) {
    return 1;
  }

  if (m == 0) {
    return n + 1;
  }

  if (n == 0) {
    return ackermann(m - 1, 1);
  }

  return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
  std::cout << "ackermann(2, 3): " << ackermann(2, 3) << std::endl
            << "ackermann(3, 2): " << ackermann(3, 2) << std::endl;

  return EXIT_SUCCESS;
}
