// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    
    cout << "Enter 2 numbers please: ";
    cin >> a >> b;
    
    cout << "The total is: " << add(a,b) << endl;    
    return 0;
}

