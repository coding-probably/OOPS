// Abstraction : hiding all unnecessary details or
// sensitive details and only showing only the
// important class

// one way using access modifiers

// another way by using abstract class

#include <bits/stdc++.h>
using namespace std;

// automatically becomes abstract class due
// to presence of pure function

class Shape {   // abstract class
    // pure virtual function
    virtual void draw() = 0;
};

class Circle : public Shape {
    public:
        void draw(){
            cout << "drawing the circle..\n";
        }
};


int main() {
	// Shape s1; this gives abstract error
	Circle c1;
	c1.draw();
	
	return 0;
}
