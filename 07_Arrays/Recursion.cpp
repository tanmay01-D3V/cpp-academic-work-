#include <iostream>
using namespace std;

int factorial(int a);

int main() {
    int a;
    cout << "Enter a non-negative number: ";
    cin >> a;

    if (a < 0) {
        cout << "Factorial is not defined for negative numbers.";
    } else {
        cout << "Factorial of " << a << " = " << factorial(a);
    }

    return 0;
}

int factorial(int a) {
    if (a == 0 || a == 1) {
        return 1;
    } else {
        return a * factorial(a - 1);
    }
}
