#include <string>
#include <cstdlib>
#include <iostream>

std::string convertBoolToString(const bool &flag) {
  return flag ? "true" : "false";
}

bool isHoliday(const int &day) {
  if (day == 6 || day == 7) {
    return true;
  }

  return false;
}

int main() {
  std::cout << "isHoliday(6): " << convertBoolToString(isHoliday(6)) << std::endl
            << "isHoliday(7): " << convertBoolToString(isHoliday(7)) << std::endl
            << "isHoliday(1): " << convertBoolToString(isHoliday(1)) << std::endl;

  return EXIT_SUCCESS;
}
