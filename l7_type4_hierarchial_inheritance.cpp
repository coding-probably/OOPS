// Types of Inheritance

// Hierarchial inheritance

#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int rollno;
};

class Teacher : public Person{
public:
    string subject;
};


int main() {
    Teacher t1;
    t1.name = "rahul kumar";
    t1. subject = "engineering";
    
    Student s1;
    s1.name = "rahhul yadav";
    s1.rollno = 1234;
    
    cout << "Teacher : " << endl;
    cout << "name : " << t1.name << endl;
    cout << "subject : " << t1.subject << endl;
    
    
    cout << "Student : " << endl;
    cout << "name : " << s1.name << endl;
    cout << "rollno : " << s1.rollno << endl;
 	return 0;
}
