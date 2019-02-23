// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

// A simple demonstration of recursion

#include <iostream>

using namespace std;

void countDown(int start) {
    if (start > 1) {
        cout << start << endl;
        countDown(start - 1);
    }
    else {
        cout << 1 << endl;
    }
}

int main() {

    countDown(10);
    
    return 0;
}