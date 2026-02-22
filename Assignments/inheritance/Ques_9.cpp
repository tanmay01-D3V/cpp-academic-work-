#include <iostream>
using namespace std;

class Circle {
protected:
    float r;
public:
    void getRadius() {
        cout << "Enter radius: ";
        cin >> r;
    }
};

class Area : public Circle {
public:
    void showArea() {
        cout << "Area = " << 3.14 * r * r << endl;
    }
};

class Circumference : public Circle {
public:
    void showCircumference() {
        cout << "Circumference = " << 2 * 3.14 * r;
    }
};

int main() {
    Area a;
    Circumference c;

    a.getRadius();
    a.showArea();

    c.getRadius();
    c.showCircumference();
    return 0;
}
