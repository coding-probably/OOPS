// Shallow & deep copy
// when there is dyanmically allocated memeory 
// in the program


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
    
    
    // this creates a shallow copy
    // Student(Student &obj) {
    //     this->name = obj.name;
    //     this->cgpaPtr = obj.cgpaPtr;
    // }
    
    // this creates deep copy by createing copy of dynamically
    // allocated memory
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
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
    
    Student s2(s1);
    s2.name = "neha kumar";
    cout << "\nstudent s2 : " << endl;
    s2.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s2.getInfo();
    

    s1.getInfo();
    
	return 0;
}

