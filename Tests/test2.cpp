#include <iostream>
#include "../lab18.cpp"
using namespace std;

int main() {
    string setA[] = {"Apple", "apple1", "apple10", "apples", "apricot", "1apple"};

    // declare and initialize variable to hold size of each array here
    int setASize = sizeof(setA)/sizeof(setA[0]);

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

