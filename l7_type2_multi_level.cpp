// Types of Inheritance

// Multi-level inheritance

#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    // name, age, rollno
    int rollno;
};

class GradStudent : public Student {
public:
    string researchArea;
};

int main() {
    GradStudent g1;
    g1.name = "rahul kumar";
    g1.researchArea = "quantum physics";
    
    cout << "name : " << g1.name << endl;
    cout << "research area : " << g1.researchArea << endl;
 	return 0;
}
