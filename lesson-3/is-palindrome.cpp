#include <string>
#include <cstdlib>
#include <iostream>

std::string convertBoolToString(const bool &flag) {
  return flag ? "true" : "false";
}

bool isPalindrome(const int &n) {
  const std::string numberAsString = std::to_string(n);
  const auto size = numberAsString.size();

  // Special cases
  if (size < 2) {
    return false;
  }

  const int middle = size / 2;
  const auto startIterator = numberAsString.cbegin();
  const auto middleIterator = startIterator + middle;
  const auto endIterator = numberAsString.cend() - 1;
  for (auto i = startIterator; i != middleIterator; ++i) {
    const auto mirroredIterator = startIterator + (endIterator - i);

    if (*i != *mirroredIterator) {
      return false;
    }
  }

  return true;
}

int main() {
  std::cout << "isPalindrome(14212): " << convertBoolToString(isPalindrome(14212)) << std::endl
            << "isPalindrome(12821): " << convertBoolToString(isPalindrome(12821)) << std::endl
            << "isPalindrome(23432): " << convertBoolToString(isPalindrome(23432)) << std::endl;

  return EXIT_SUCCESS;
}
