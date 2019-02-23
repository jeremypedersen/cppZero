#include <iostream>

// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

using namespace std;

class Student {
    // Data
    private:
	    string name;
	    int age;
	    float score;
	    
    // Methods (functions inside the class)
    public:
	    void setData(string selfName, int selfAge, float selfScore) {
	        name = selfName;
	        age = selfAge;
	        score = selfScore;
	    }
	    
	    void printData() {
	        cout << "Name: " << name << endl;
	        cout << "Age: " << age << endl;
	        cout << "Score: " << score << endl;
	    }
};

int main() {

    // Make a struct that can hold 3 students
    Student students[3];
    
    // Temporary variables
    string name;
    int age;
    float score;

    // Enter name, age, and score
    for (int i = 0; i < 3; i++) {
        cout << "Enter name, age, and score..." << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Score: ";
        cin >> score;
        cout << endl;
        
        // Put data into student array
        students[i].setData(name, age, score);
    }
    cout << endl;
    
    cout << "Printing array..." << endl;
    
    cout << endl;
    for (int i = 0; i < 3; i++) {
        students[i].printData();
        cout << endl;
    }
    
    return 0;
}