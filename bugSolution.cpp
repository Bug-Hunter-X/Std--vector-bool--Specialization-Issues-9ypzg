#include <vector>
#include <iostream>

int main() {
  std::vector<bool> vec;
  vec.push_back(true);
  vec.push_back(false);

  // Use at() for safer access
  bool b = vec.at(0); 
  bool c = vec.at(1);

  std::cout << "b: " << b << std::endl; // Output: b: 1
  std::cout << "c: " << c << std::endl; // Output: c: 0

  return 0;
} 