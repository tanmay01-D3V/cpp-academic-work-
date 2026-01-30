#include <iostream>
using namespace std;

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x, y;
    cout<<"Enter two numbers: "
    cin >> x >> y;
    cout << "Subtraction = " << subtract(x, y);
    return 0;
}
