#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    int x;

    cout << "Enter a positive integer: ";
    cin >> x;

    if (x < 0) {
        cout << "Error: Factorial of a negative number doesn't exist." << endl;
    } else {
        long long fact = factorial(x);
        cout << "Factorial of " << x << " is " << fact << endl;
    }

    return 0;
}
