// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string words;
    
    cout << "Enter a sentence: ";    
    getline(cin, words);
    cout << "You said: " << words << endl;
    
    return 0;
}

