// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

// Demonstrates the concept of rollover (tested on 64-bit Intel machine)

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    unsigned char x = 0;
    int y = 0;

    cout << "int has size " << sizeof(y) << " byte(s)" << endl;
    cout << "unsigned char has size " << sizeof(x) << " byte(s)" << endl;
    
    for (y = 0; y < 500; y++) {
        printf("y = %d, x = %u\n", y, x);
        x++;
    }
}
