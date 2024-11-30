#include "header.h"
#include<iostream>

MyClass::MyClass(int value) : data(value) {};

void MyClass::classfunction() const {
  std::cout << data << std::endl;
}

