#include <bits/stdc++.h>
using namespace std;

class Teacher {
private:
    double salary;
    
public: 
    // public/private/protected by default it's private
    
    // properties / attribute
    string name;
    string dept;
    string subject;
    
    // methods / member function
    void changeDept(string newDept){
        dept = newDept;
    }
    
    // setter function : used to set privat values
    void setSalary(double s){
        salary = s;
    }
    
    // getter function : used to access the private attribute
    double getSalary(){
        return salary;
    }
};


int main() {
    Teacher t1;
    t1.name = "abcd";
    t1.dept = "Comouter Science";
    t1.subject = "C++";
    
    t1.setSalary(25000);
    
    cout << t1.name << endl;;
    cout << t1.getSalary() << endl;
    return 0;
}
