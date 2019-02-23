// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

// This code demonstrates the insanity of the #define
// Here, I use it to get the compiler to accept the Python 3
// print statement print("Hello world") as valid C++...but only once

#include <stdio.h>
#define print(x) int main(){printf("%s\n",x);return 0;}

print("Hello world")





