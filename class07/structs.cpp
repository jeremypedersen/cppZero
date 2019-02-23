// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

#include <iostream>

using namespace std;

struct Student {
	string name;
	int age;
	float score;
};

int main() {

    // Make a struct that can hold 3 students
    Student students[3];

    // Enter name, age, and score
    for (int i = 0; i < 3; i++) {
        cout << "Enter name, age, and score..." << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Age: ";
        cin >> students[i].age;
        cout << "Score: ";
        cin >> students[i].score;
        cout << endl;
    }
    cout << endl;
    
    cout << "Printing array..." << endl;
    
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Student #" << i << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Score: " << students[i].score << endl;
        cout << endl;
    }
    
    return 0;
}