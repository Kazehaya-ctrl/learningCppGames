#include<iostream>

template<typename T>
T bubbleSort(T* arr, T target,  T start, T end) {

   if(start > end) {
      return -1;
   }

   T mid = start + ((end - start)/2);

   if(arr[mid] == target) {
      return mid;
   } else if (arr[mid] > target) {
      return bubbleSort(arr, target, start, mid - 1);
   } else {
      return bubbleSort(arr, target, mid + 1, end);
   }
}

int main() {
   int* arr = new int[10]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   int a = bubbleSort(arr, 90, 0, 9);
   std::cout << arr << std::endl;
   std::cout << a << std::endl;
   
   delete[] arr;
   return 0;
}