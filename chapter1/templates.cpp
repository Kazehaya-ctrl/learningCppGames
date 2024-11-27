#include<iostream>


template <typename T>
T add (T a, T b) {
   return a + b;
}

template <typename T, typename U>
T multiply (T a, U b) {
   return a * b;
}

int main() {
   int y = add(3, 4);
   std::cout << y << std::endl;

   int x = multiply(0.4, 2);
   std::cout << x << std::endl;

   return 0;
}