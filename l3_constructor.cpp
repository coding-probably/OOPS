// Constructor : special method invoked automatically at
// time of the object creation, used for initialization
// used for the memory allocation of the objects


#include <bits/stdc++.h>
using namespace std;

class Teacher {
private:
    double salary;

public:

    // constructor overloading : having multiple constructor with
    // different number of parameters
    
    // Type 1 : non-parametrized constructor
    Teacher(){
        cout << "Hi, I am constructor\n";
        dept = "Computer Science";
    }
    
    // Type 2 : non-parametrized
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    
    // Type 3 : copy constructor it's also created by default
    Teacher(Teacher &obj){
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }
    
    string name;    // properties / attribute
    string dept;
    string subject;
    
    void setSalary(double s){   // setter function
        salary = s;
    }
    
 
    double getSalary(){ // getter function
        return salary;
    }
    
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
    }
};


int main() {
    // Type 1 : constructor
    Teacher t1;
    t1.name = "abcd";
    t1.subject = "C++";
    t1.setSalary(25000);
    cout << "Type 1 : " << endl;
    t1.getInfo();
    
    // Type 2 : parametrized
    Teacher t2("abcd2", "ComputerScience2", "C++2", 35000);
    cout << "Type 2 : " << endl;
    t2.getInfo();
    
    //Type 3 : copy it's also created by default no need to create it
    Teacher t3(t2);
    cout << "Type 3 : " << endl;
    t3.getInfo();
    
    
	return 0;
}
