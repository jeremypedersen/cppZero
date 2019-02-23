// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

#include <iostream>

using namespace std;

int main(){
    
    int myArray[10]; // Make an array that can hold 10 numbers
    int i;
    
    // Fill array
    cout << "Enter 10 numbers: ";
    for (i = 0; i < 10; i++) {
    	cin >> myArray[i];
    }
    
    // Print out array
    for (i = 0; i < 10; i++) {
    	cout << myArray[i] << " ";
    }
    cout << endl;
    
    return 0;
}