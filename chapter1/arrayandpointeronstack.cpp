#include<iostream>

int main() {
  //array on stack and pointer on stack
  int arr[] = {10, 20, 30, 40, 50};
  std::cout << arr << std::endl;

  int* ptr = arr;
  std::cout << ptr << std::endl;
  std::cout << *ptr << std::endl;

  //array on heap and pointer on stack
  int* array = new int[]{10, 20, 30, 40, 50};
  for (int i = 0; i < 5; ++i) {
    std::cout << array + i << std::endl;
  }
  for (int i = 0; i < 5; ++i) {
    std::cout << &array[i] << std::endl;
  }
  std::cout << array[3] << std::endl;

  return 0;
}
