#include<iostream>

int main() {
   int array[7] = {1, 2, 3, 4, 5};
   int* p = array;
   
   int a = 8;
   int* ptr = &a;
   std::cout << *ptr << std::endl;
   *ptr = 45;
   std::cout << a << std::endl;


   for (int i = 0; i < 7; i++) {
      // std::cout<<array[i]<<std::endl;
      std::cout<<&array[i]<<std::endl;
   }

   // for (int a_number : array) {
   //    std::cout << a_number << std::endl;
   // }
   return 0;
}