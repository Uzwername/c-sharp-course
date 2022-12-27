#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>

std::string serializeStringVector(const std::vector<std::string> &strings) {
  std::string serializedSequence = "";

  const auto endIterator = strings.cend();
  const auto lastIterator = endIterator - 1;
  for (auto i = strings.cbegin(); i != endIterator; ++i) {
    if (i != lastIterator) {
      serializedSequence += "\"" + *i + "\"" + ", ";
    } else {
      serializedSequence += "\"" + *i  + "\"";
    }
  }

  return "[" + serializedSequence + "]";
}

std::vector<std::string> filterLongStrings(const std::vector<std::string> &strings) {
  std::vector<std::string> shortStrings = {};

  for (const auto &string : strings) {
    if (string.size() <= 3) {
      shortStrings.push_back(string);
    }
  }

  return shortStrings;
}

int main() {
  std::cout << "filterLongStrings([\"hello\", \"2\", \"world\", \":-)\"]): " << serializeStringVector(filterLongStrings({ "hello", "2", "world", ":-)" })) << std::endl
            << "filterLongStrings([\"1234\", \"1567\", \"-2\", \"computer science\"]): " << serializeStringVector(filterLongStrings({ "1234", "1567", "-2", "computer science" })) << std::endl
            << "filterLongStrings([\"Russia\", \"Denmark\", \"Kazan\"]): " << serializeStringVector(filterLongStrings({ "Russia", "Denmark", "Kazan" })) << std::endl;

  return EXIT_SUCCESS;
}
