#include<iostream>

void modify (int &x) {
   x = 40;
}

void modify_sorta (int* p) {
   *p = 50;
}

int main() {
   int a = 8;
   std::cout << a << std::endl;
   modify(a);
   std::cout << a << std::endl;
   modify_sorta(&a);
   std::cout << a << std::endl;

   return 0;
}