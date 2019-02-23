// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

// This code demonstrates how to make an unreadable mess using
// the preprocessor's #define

#include <iostream>
#define doit(x) for(x){
#define end }
#define print(x,i) printf(x,i);

using namespace std;

int main() {

    doit(int i = 0; i < 5; i++)
        print("We have %d apples\n", i)
    end
    
    return 0;

}





