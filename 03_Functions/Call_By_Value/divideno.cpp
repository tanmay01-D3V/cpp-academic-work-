#include <iostream>
using namespace std;

float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Division = " << divide(x, y);
    return 0;
}
