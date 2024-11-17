#include <iostream>
#include "../lab18.cpp"
using namespace std;

int main() {
    int setA[] = {35, 45, 55, 20, 90, 50, 65, 50, 85};

    // declare and initialize variable to hold size of each array here
    int setASize = sizeof(setA)/sizeof(int);

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

