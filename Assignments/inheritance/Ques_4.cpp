#include <iostream>
using namespace std;

class Number {
protected:
    int n;
public:
    void getNum() {
        cout << "Enter a number: ";
        cin >> n;
    }
};

class Square : public Number {
public:
    void showSquare() {
        cout << "Square = " << n * n << endl;
    }
};

class Cube : public Number {
public:
    void showCube() {
        cout << "Cube = " << n * n * n;
    }
};

int main() {
    Square s;
    Cube c;

    s.getNum();
    s.showSquare();

    c.getNum();
    c.showCube();
    return 0;
}
