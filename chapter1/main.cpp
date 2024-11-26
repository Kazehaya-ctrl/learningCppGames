#include<iostream>

void example();

int main() {
   int arr3[5];
   int arr[7] = {1, 2};
   std::cout<<"Hello world"<<std::endl;
   std::cout<<arr[5]<<std::endl;
   std::cout<<arr3[3]<<std::endl;
   example();
   return 0;
}

void example() {
   int arr[3];
   std::cout<<arr[2];
}