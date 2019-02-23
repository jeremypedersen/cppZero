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
    
    // YOUR CODE HERE
     
    // Print sorted array
    cout << "Sorted array: " << endl;
    for (int i = 0; i < 6; i++){
        cout << simpleArray[i] << " ";
    }   
    cout << endl;
    
    return 0;
}