// 
// Code by: Jeremy Pedersen
// 
// Licensed under the BSD 2-clause license (FreeBSD license) 
//

// A simple demonstration of operator overloading

#include <iostream>

using namespace std;

class Point {
    // Data
    private:
	    int x,y;
	    
    // Methods (functions inside the class)
    public:
        // Empty constructor
        Point();
    
        // Constructor
        Point(int xp, int yp);
        
        // "+" operator overload
        Point operator+(const Point& otherPoint);
        
        friend ostream& operator<<(ostream& os, const Point& pt);  
        
        void setPoint(int xp, int yp) {
            x = xp;
            y = yp;
        }
        
        int getX() {
            return x;
        }
        
        int getY() {
            return y;
        }
};  

// Empty constructor
Point::Point() {

}

// Tell the computer how to make a new point
Point::Point(int xp, int yp) {
    x = xp;
    y = yp;
}

// Tell the computer what "+" means for the Point class
Point Point::operator+(const Point& otherPoint) {
    Point newPoint(x+otherPoint.x, y+otherPoint.y);
    return newPoint;
}
    
// Tell the computer how to make a string that can be output with
// "cout <<"
ostream& operator<<(ostream& os, const Point& pt)  
{  
    os << '(' << pt.x << ',' << pt.y << ')';
    return os;  
}

int main() {

    Point a,b,c; 
    int x,y;
    
    cout << "Enter two numbers (as in 4 5): "; 
    cin >> x >> y;
    
    a.setPoint(x,y);
    
    cout << "Enter two numbers (as in 4 5): "; 
    cin >> x >> y;
    
    b.setPoint(x,y);
    
    cout << "We will now add the points a and b together..." << endl;
        
    c = a + b; // Now we can just do a+b! No special functions
        
    cout << "a + b is..." << c << endl; // And we can just use cout << too!
    
    return 0;
}