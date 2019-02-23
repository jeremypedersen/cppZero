// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

// This code demonstrates problems that can be caused by
// preprocessor macros

#include <iostream>
#define defsquare(x) x*x

int square(int a){
    return a*a;
}

using namespace std;

int main() {

    int a = 5;
    int b;
    
    b = square(++a); 
    cout << "After running the square function, ++a is " << a << " and square(++a) gives us " << b << endl;
    
    a = 5; // Reset a to five
    b = defsquare(++a);
    cout << "After running the defsquare #define, ++a is " << a << " and defsquare(++a) gives us " << b << endl;

    return 0;

}





