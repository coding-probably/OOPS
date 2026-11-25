#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    int salary;

public:
    Employee(int salary){
        this->salary = salary;
    }
    
    
    // friend function creation
    friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp){
    cout << "Salary : " << emp.salary;
};

int main() {
    Employee myEmp(25000);
    displaySalary(myEmp);
    
	return 0;
}