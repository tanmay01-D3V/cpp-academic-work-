#include <iostream>
using namespace std;

class Rectangle {
protected:
    int length, breadth;
public:
    void getData() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }
};

class Area : public Rectangle {
public:
    void showArea() {
        cout << "Area = " << length * breadth;
    }
};

int main() {
    Area obj;
    obj.getData();
    obj.showArea();
    return 0;
}
