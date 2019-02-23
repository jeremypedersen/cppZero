// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

#include <iostream>
#include <vector>

using namespace std;

void minmax(int* a) {
    if (*a > 1) {
        *a = 1;
    }
    if (*a < 1) {
        *a = 0;
    }
}

int main() {
    
    int x;
    
    cout << "Enter a number: ";
    cin >> x;
    
    minmax(&x);
    
    cout << "Result is: " << x << endl;
    
    return 0; 
}