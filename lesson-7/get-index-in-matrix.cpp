#include <ctime>
#include <vector>
#include <cstdlib>
#include <iostream>

double getIndexInMatrix(const std::vector<const std::vector<double>> &matrix, const unsigned &index) {
  unsigned matrixIndex = 0;

  for (const auto &column : matrix) {
    for (const auto &row : column) {
      if (matrixIndex == index) {
        return row;
      }

      ++matrixIndex;
    }
  }

  return -1;
}

int main() {
  std::cout << getIndexInMatrix(
                {
                  {1, 4, 7, 2},
                  {5, 9, 2, 3},
                  {8, 4, 2, 4}
                },
                17
              )
            << std::endl;

  return EXIT_SUCCESS;
}
