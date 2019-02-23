#include <iostream>

using namespace std;

int main() {

    int j;

    cout << "For loop" << endl;
    for(int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "While loop" << endl;
    j = 0;
    while (j < 10) {
        cout << j << " ";
        j++;
    }
    cout << endl;
    
    return 0;
}