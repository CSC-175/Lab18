#include <iostream>
using namespace std;

// Definition of printArray function goes here
template <typename X, typename Z>
void printArray(X *array, Z size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}

// Definition of sortDn function goes here
template <typename A, typename B>
void sortDn(A *array, B size){
    A temp;
    for(int alpha=0;alpha<size;alpha++){
        for(int beta=alpha+1;beta<size;beta++){
            if (array[beta] > array[alpha]){
                temp = array[alpha];
                array[alpha] = array[beta];
                array[beta] = temp;
            }
        }
    }
}

