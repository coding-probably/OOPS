#include <bits/stdc++.h>
using namespace std;

class Parent {
public:
    // function overriding
    void getInfo(){
        cout << "Parent class..\n";
    }
    
    // virtual function
    virtual void hello(){
        cout << "hello from parent..\n";
    }
};


class Child : public Parent {
public:
    // function overriding
    void getInfo(){
        cout << "Child class..\n";
    }
    
    // virtual function
    void hello(){
        cout << "hello from child..\n";
    }
};

int main() {
	// your code goes here
	cout << "function overriding : " << endl;
	Child c1;
	c1.getInfo();
	
	Parent p1;
	p1.getInfo();
	
	cout << "\nvirtual function : " << endl;
	c1.hello();
	p1.hello();
	
	return 0;
}
