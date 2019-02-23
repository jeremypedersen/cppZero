// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int x;
    
    cout << "Enter a number: ";
    cin >> x;
    
    cout << "The number inside x is " << x << endl;
    cout << "The address of x is " << &x << endl;
    
    return 0; 
}