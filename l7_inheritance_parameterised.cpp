// Inheritance : with parameterized constructor

#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;
    
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }   
};

class Student : public Person {
public:
    // name, age, rollno
    int rollno;
    
    // for parent no need to describe datatype of parameters
    Student(string name, int age, int rollno) : Person(name, age){
        this->rollno = rollno;
    }
    
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};



int main() {
    Student s1("rahul kumar", 21, 1234);
    s1.getInfo();
    
	return 0;
}
