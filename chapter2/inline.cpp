#include<iostream>

inline int sum(int a, int b) {
  return a + b;
}

int main() {
  std::cout << sum(4, 5) << std::endl;
  return 0;
}

