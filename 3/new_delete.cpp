#include <iostream>

int main() {
  int *p = new int;
  *p = 10;

  std::cout << "Value : " << *p << std::endl;
  std::cout << "Address : " << p << std::endl;

  delete p;
  return 0;
}