// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

// The Fibonacci series

#include <iostream>

using namespace std;

void fibonacci(int a, int b, int n){
    if (n > 0) {
        cout << b << " ";
        fibonacci(b, a+b, n-1);
    }
    else {
        cout << endl;
    }
}

int main() {

    cout << "The first 12 Fibonacci numbers: " << endl;
    fibonacci(0, 1, 12);
    
    return 0;
}

