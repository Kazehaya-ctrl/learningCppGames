#include<iostream>
#include<string>

template <typename T>
class My_class {
   T data;
public:
   My_class(T value) : data(value) {};

   void display () {
      std::cout << data << " : " << typeid(data).name() << std::endl;
   }
};

int main() {
   My_class<int> obj(45);
   obj.display();
   return 0;
}