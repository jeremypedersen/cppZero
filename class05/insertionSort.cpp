// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

#include <iostream>

using namespace std;

int main(){

    int simpleArray[] = {6, 5, 4, 3, 2, 1};
    
    // Print original array
    cout << "Original array: " << endl;
    for (int i = 0; i < 6; i++){
        cout << simpleArray[i] << " ";
    }   
    cout << endl;
    
    // Implementation of insertion sort
    int key = 0;
    int i,j;
    for (j = 1; j < 6; j++) {
        key = simpleArray[j];
        i = j-1;
        while (i >= 0 and simpleArray[i] > key) {
            simpleArray[i+1] = simpleArray[i];
            i = i-1;
        } 
        simpleArray[i+1] = key;    
    }

    // Print sorted array
    cout << "Sorted array: " << endl;
    for (int i = 0; i < 6; i++){
        cout << simpleArray[i] << " ";
    }   
    cout << endl;
    
    return 0;
}