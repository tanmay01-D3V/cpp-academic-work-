
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    Student(string n, int a, int r) : Person(n, a) {
        rollNo = r;
    }

    void displayStudent() {
        displayPerson();   
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s("Tanmay", 20, 101);
    s.displayStudent();
    return 0;
}