#include "header.h"
#include<iostream>

int main() {

   std::cout << add(3, 5) << std::endl;
   std::cout << multiply(0.4, 5) << typeid(multiply(0.4, 5)).name() << std::endl;
   return 0;
}