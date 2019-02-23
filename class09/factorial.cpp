// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

// Recursive factorial function

#include <iostream>

using namespace std;

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n-1);
    }
    else {
        return 1;
    }
}

int main() {

    cout << "Factorial of 5 is: " << factorial(5) << endl;
    
    return 0;
}

