// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

// A program which intentionally indexes past the end of
// an array, to show the ill effects this can have

#include <iostream>

using namespace std;

int main() {
    
    int stuff[] = {5,6};
    
    for (int i = 0; i < 1000; i++){
        cout << stuff[i] << endl;
    }
        
    return 0; 
}