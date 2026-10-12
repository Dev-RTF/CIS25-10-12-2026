#include <iostream>

using namespace std;

int main() {
    // stack only has 8 mb
    int x = 5;
    cout << endl << sizeof(x) << endl; // returns 4 (measured in bytes) for an int, 8 for a double
    
    // ~1 mil bytes = 1 mb
    const int SIZE = 1500000; // 1500000 causes stack overflow if allocated to the stack: "Segmentation fault"
    // local vars allocated to the stack
    // double arr[SIZE];
    
    // fix this by allocating to the heap
    double* arr = new double[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i];
    }
    
    return 0;
}