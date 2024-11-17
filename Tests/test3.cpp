#include <iostream>
#include "../lab18.cpp"
using namespace std;

int main() {
    float setA[] = {199.34, 72.20, -65.90, 66.33, 299.77, 88.5,
          -44.12, 45.75,  88.45, 65.64, 77.21, -24, 6.62};

    // declare and initialize variable to hold size of each array here
    int setASize = sizeof(setA)/sizeof(float);

    cout << "Set A original order: ";
    // call to printArray function
    printArray(setA,setASize);
    // call to sortDn function
    sortDn(setA,setASize);
    cout << "\nDescending order: ";
    // call to printArray function
    printArray(setA,setASize);

    return 0;
}

