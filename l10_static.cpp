#include <bits/stdc++.h>
using namespace std;

void fun(){
  static int x = 0;
  cout << "x : " << x << endl;
  x++;
};

class Student {
public:
    int x;
    static int totalNumber;
    
    Student(){
        totalNumber++;
    }
};

int Student::totalNumber = 0;

class AB {
public:
    AB(){
        cout << "\nconstructor\n";
    }
    
    ~AB(){
        cout << "destructor\n";
    }
};

class ABC {
public:
    ABC(){
        cout << "\nconstructor\n";
    }
    
    ~ABC(){
        cout << "\ndestructor\n";
    }
};


int main() {
    // static variable for function
	fun(); fun(); fun();
	cout << endl;
	
	// static variable for object
	Student obj1; Student obj2;
	obj1.x = 10;
	obj2.x = 20;
	
	cout << "obj1 x : " << obj1.x << " y : " << obj1.totalNumber << endl;
	cout << "obj2 x : " << obj2.x << " y : " << obj2.totalNumber << endl;
	
	
	if(true){
	    AB obj;
	}
	
	cout << "static object : " << endl;
	if(true){
	    static ABC ob; // this destructor called after end of program
	}
	
	cout << "end of program..";
	return 0;
}
