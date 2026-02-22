#include <iostream>
using namespace std;

class Base {
protected:
    int n;
public:
    void getNum() {
        cout << "Enter a number: ";
        cin >> n;
    }
};

class Square : public Base {
protected:
    int sq;
public:
    void calcSquare() {
        sq = n * n;
    }
};

class Cube : public Square {
public:
    void showCube() {
        cout << "Cube = " << sq * n;
    }
};

int main() {
    Cube obj;
    obj.getNum();
    obj.calcSquare();
    obj.showCube();
    return 0;
}
