#include <iostream>
#include "./lab18.cpp"
using namespace std;

int main() {
    int setA[] = {10, 40, 20, 15, 35, 30};
    double setB[] = {76.25, 85.45, -45.90, 99.34, 72.20, -65.90, 66.33, 99.77, 88.5,
          -44.12, 45.75, 57.77, -88.42, 99.47, 75.75, 88.45, 65.64, 77.21, -24, 62};
    string setC[] = {"Apple", "apple1", "apple10", "apples", "apple", "1apple"};
    char setD[] = {'e', 'a', '3', 'K', 'z', '*', ';', 'Z' };

    // declare and initialize variable to hold size of each array here
    int setASize = sizeof(setA)/sizeof(int);
    int setBSize = sizeof(setB)/sizeof(double);
    int setCSize = sizeof(setC)/sizeof(setC[0]);
    int setDSize = sizeof(setD)/sizeof(char);

    cout << "Set A original order: ";
    // call to printArray function
    printArray(setA,setASize);
    // call to sortDn function
    sortDn(setA,setASize);
    cout << "\nDescending order: ";
    // call to printArray function
    printArray(setA,setASize);

    cout << "\n\nSet B original order: ";
    // call to printArray function
    printArray(setB,setBSize);
    // call to sortDn function
    sortDn(setB,setBSize);
    cout << "\nDescending order: ";
    // call to printArray function
    printArray(setB,setBSize);

    cout << "\n\nSet C original order: ";
    // call to printArray function
    printArray(setC,setCSize);
    // call to sortDn function
    sortDn(setC,setCSize);
    cout << "\nDescending order: ";
    // call to printArray function
    printArray(setC,setCSize);

    cout << "\n\nSet D original order: ";
    // call to printArray function
    printArray(setD,setDSize);
    // call to sortDn function
    sortDn(setD,setDSize);
    cout << "\nDescending order: ";
    // call to printArray function
    printArray(setD,setDSize);

    return 0;
}

