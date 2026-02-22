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

class Check : public Base {
public:
    void checkEvenOdd() {
        if (n % 2 == 0)
            cout << "Number is Even" << endl;
        else
            cout << "Number is Odd" << endl;
    }
};

class Square : public Check {
public:
    void showSquare() {
        cout << "Square = " << n * n;
    }
};

int main() {
    Square obj;
    obj.getNum();
    obj.checkEvenOdd();
    obj.showSquare();
    return 0;
}
