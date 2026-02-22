#include<iostream>
using namespace std;

class Person {
public:
    void showPerson(){
        cout<<"THis is a person: "<< endl;
    }
};

class Employee : public Person {
public: 
    void showEmployee(){
        cout<<"This is an employee: "<< endl;
    }
};

class Manager : public Employee{
    public: 
        void showManager(){
            cout<<"This is an manager: "<<endl;
        }
};

int main(){
    Manager m;
    m.showPerson();
    m.showEmployee();
    m.showManager();
    return 0;
}


