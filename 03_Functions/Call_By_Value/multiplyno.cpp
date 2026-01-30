#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Multiplication = " << multiply(x, y);
    return 0;
}
