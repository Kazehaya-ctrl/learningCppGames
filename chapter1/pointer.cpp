#include<iostream>
#include<string>

void message (const char* message) {
  std::cout << message << std::endl;
}

int main() {
  char arr[] = "hell";
  char array[] = {'e', 'e', 'l'};
  std::cout << array << std::endl;
  for (int i = 0; i < sizeof(arr)/sizeof(char) - 1; i++) {
    std::cout << arr[i] << std::endl;
  }

  int arr2[] = {1, 3, 4, 5};
  std::cout << arr2 << std::endl;
  std::cout << arr << std::endl;
  std::cout << (void*)arr << std::endl;
  message(arr);
  return 0;
}