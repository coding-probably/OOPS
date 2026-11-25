// Destructor : it is create by default with class and
// it is autoomatically invoked at the end of program


#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;
    
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
   
    // destructor
    ~Student(){
        cout << "Hi, I delete everything";
        delete cgpaPtr; // include this to delete dynamically allocated memory
    }
    
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};


int main() {
    Student s1("rahul kumar", 8.9);
    cout << "student s1 : " << endl;
    s1.getInfo();
    
	return 0;
}
