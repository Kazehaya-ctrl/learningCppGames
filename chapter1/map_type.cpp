#include<iostream>
#include<string>
#include<map>
#include<unordered_map>

int main () {
   std::map<int, std::string> my_map= {{1, "one"}, {2, "two"}};
   std::cout<<my_map[1]<<std::endl;

   auto s = my_map.begin();
   std::cout << s->first << std::endl;

   for(const auto& element: my_map) {
      std::cout << element.first <<  " : " << element.second << std::endl;
   }
   
   return 0;
}