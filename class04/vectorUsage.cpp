// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

// This code demonstrates basic vector usage in C++

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arraySize, i, tmp;
    vector<int> array;
    
    cout << "How big is your array?: ";
    cin >> arraySize;
    
    for (i = 0; i < arraySize; i++){
        cin >> tmp;
        array.push_back(tmp); // Vectors grow dynamically
    }
    
    for (i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
        
}