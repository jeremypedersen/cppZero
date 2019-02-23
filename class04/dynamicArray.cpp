// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

#include <iostream>

using namespace std;

int main(){
    int arraySize, i;
    
    cout << "How big do you want your array?: ";
    cin >> arraySize; // Ask for array size
    
    // Allocate a new array
    int* array = new (nothrow) int[arraySize];
    
    // Read in elements
    for (i = 0; i < arraySize; i++){
        cin >> array[i];
    }
    
    // Print array out backwards
    for (i = 0; i < arraySize; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    
    // Free memory and return
    delete[] array;
    return 0;      
}