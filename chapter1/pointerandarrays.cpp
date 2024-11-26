#include<iostream>
using namespace std;

int main() {
   int* ptr = new int[5];
   int b = 1;
   int &r = b;
   r = 7;
   cout<<r<<endl;
   cout<<&r<<endl;
   cout<<&b<<endl;
   cout<<sizeof(ptr)<<endl;
   for (int i = 0; i < 5; i++) {
      int a;
      cin >> a;
      *(ptr + i) = a;
   }
   
   for (int i = 0; i < 5; ++i) {
      cout << *(ptr + i) << endl;
   }

   delete[] ptr;
   return 0;
}