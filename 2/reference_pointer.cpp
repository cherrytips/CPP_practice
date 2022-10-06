#include <iostream>

int change_val(int *p) {
  *p = 3;

  return 0;
}

int main() {
  int number = 5;

  std::cout << "Before : " << number << std::endl;
  change_val(&number);
  std::cout << "After : " << number << std::endl;

  return 0;
}