#include <iostream>
using namespace std;

class Number {
protected:
    int n;
public:
    void getData() {
        cout << "Enter a number: ";
        cin >> n;
    }
};

class Square : public Number {
public:
    void showSquare() {
        cout << "Square = " << n * n;
    }
};

int main() {
    Square obj;
    obj.getData();
    obj.showSquare();
    return 0;
}
