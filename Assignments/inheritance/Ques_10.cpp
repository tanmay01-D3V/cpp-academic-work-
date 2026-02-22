#include <iostream>
using namespace std;

class Employee {
protected:
    int id;
    string name;
public:
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Salary : public Employee {
private:
    float basic, hra, da;
public:
    void getSalary() {
        cout << "Enter Basic Salary: ";
        cin >> basic;
        hra = 0.2 * basic;
        da = 0.1 * basic;
    }
    void showSalary() {
        cout << "Total Salary = " << basic + hra + da;
    }
};

int main() {
    Salary obj;
    obj.getDetails();
    obj.getSalary();
    obj.showSalary();
    return 0;
}
