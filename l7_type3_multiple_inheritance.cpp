// Types of Inheritance

// Multiple inheritance

#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int rollno;
};

class Teacher {
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher {
};

int main() {
    TA t1;
    t1.name = "rahul kumar";
    t1. subject = "engineering";
    
    cout << "name : " << t1.name << endl;
    cout << "subject : " << t1.subject << endl;
 	return 0;
}
