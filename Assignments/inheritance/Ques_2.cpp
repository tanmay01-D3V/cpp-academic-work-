#include <iostream>
using namespace std;

class A {
protected:
    int x;
public:
    void getA() {
        cout << "Enter first number: ";
        cin >> x;
    }
};

class B {
protected:
    int y;
public:
    void getB() {
        cout << "Enter second number: ";
        cin >> y;
    }
};

class Sum : public A, public B {
public:
    void showSum() {
        cout << "Sum = " << x + y;
    }
};

int main() {
    Sum obj;
    obj.getA();
    obj.getB();
    obj.showSum();
    return 0;
}
