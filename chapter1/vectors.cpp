#include<iostream>
#include<vector>

int main(){
   std::vector<int> vec = {1, 2, 4};
   vec.push_back(5);

   vec.insert(vec.begin(), 2);

   for (int& i : vec) {
      std::cout << i << std::endl;
   }
   return 0;
}
