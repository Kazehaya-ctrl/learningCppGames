#include<iostream>
#include<string>
#include<map>
#include<unordered_map>

int main () {
   std::map<int, std::string> my_map= {{1, "one"}, {2, "two"}};

   std::cout<<my_map[1]<<std::endl;
   
   return 0;
}