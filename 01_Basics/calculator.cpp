#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition = " << add(x, y) << endl;
    cout << "Subtraction = " << subtract(x, y) << endl;
    cout << "Multiplication = " << multiply(x, y) << endl;
    cout << "Division = " << divide(x, y);

    return 0;
}
