#include <ctime>
#include <vector>
#include <string>
#include <cstdlib>
#include <iostream>

void printDoubleSeq(const std::vector<double> &seq) {
  std::string stringifiedSeq = "";

  const auto endIterator = seq.cend();
  const auto lastIterator = endIterator - 1;
  for (auto i = seq.cbegin(); i != endIterator; ++i) {
    if (i != lastIterator) {
      stringifiedSeq += std::to_string(*i) + ", ";
    } else {
      stringifiedSeq += std::to_string(*i);
    }
  }

  std::cout << '[' << stringifiedSeq << ']' << std::endl;
}

std::vector<double> calculateColumnMeans(const std::vector<const std::vector<double>> &matrix) {
  // Rows aren't guaranteed to have the same length
  std::vector<double> columnSums = {};
  std::vector<unsigned> columnCounts = {};
  for (const auto &column : matrix) {
    for (unsigned i = 0; i < column.size(); ++i) {
      const auto row = column[i];

      if (columnSums.size() > i) {
        columnSums.at(i) += row;
      } else {
        columnSums.push_back(row);
      }

      if (columnCounts.size() > i) {
        columnCounts.at(i) += 1;
      } else {
        columnCounts.push_back(1);
      }
    }
  }

  std::vector<double> means = {};
  for (unsigned i = 0; i < columnSums.size(); ++i) {
    // columnCounts' size must match columnSums
    means.push_back(columnSums[i] / columnCounts[i]);
  }

  return means;
}

int main() {
  printDoubleSeq(
    calculateColumnMeans({
      {1, 4, 7, 2},
      {5, 9, 2, 3},
      {8, 4, 2, 4}
    })
  );

  return EXIT_SUCCESS;
}
