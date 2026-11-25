// Polymorphism : ability of objects to take different forms
// or behave in different ways depending on the context

// are of two types : compile time & run time



// compile time polymorphism
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    // constructor overloading
    Student(){
        cout << "non-parameterized" << endl;
    }
    
    Student(string name){
        this->name = name;
        cout << "parameterized" << endl;
    }
};

class Print {
public:

    // function overloading
    void show(int x){
        cout << "int : " << x << endl;
    }
    
    void show(char x){
        cout << "char : " << x << endl;
    }
};


int main() {
    cout << "compile time polymorphism" << endl;
    cout << "constructor overloading" << endl;
    Student s1;
    Student s2("rahul kumar");
    
    
    cout << "\n\nfunction overloading" << endl;
    Print p1;
    p1.show(0);
    p1.show('a');

 	return 0;
}
