#include "header.h"

template<typename T>
T add(T a, T b) {
   return a + b;
}

template<typename T, typename U>
T multiply(T a, U b) {
   return a * b;
}

template int add<int> (int, int);
template double multiply<double, int> (double, int);