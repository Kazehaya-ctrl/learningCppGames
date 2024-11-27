// C++ program to demonstrates the initialization of a
// dynamic array using a new keyword.

#include <iostream>
using namespace std;

int main()
{

    int size = 5;
    // initializing a dynamic array
    int* arr = new int[size]{ 1, 2, 3, 4, 5 };

    cout << arr[3] << endl;

    // printing the array elements
    cout << "Elements of the array are:  " << endl;
    for (int i = 0; i < size; i++) {
        cout << (arr + i) << " ";
    }

    // freeing-up memory space by deleting arr
    delete[] arr;

    return 0;
}