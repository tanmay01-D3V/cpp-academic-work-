#include <iostream>
using namespace std;

class Base {
protected:
    int x;
public:
    void getData() {
        cout << "Enter a number: ";
        cin >> x;
    }
};

class Derived : public Base {
public:
    void showData() {
        cout << "Value from base class = " << x;
    }
};

int main() {
    Derived obj;
    obj.getData();
    obj.showData();
    return 0;
}
