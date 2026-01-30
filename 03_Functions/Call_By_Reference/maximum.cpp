#include <iostream>
using namespace std;

void maximum(int &a, int &b) {
    if (a > b)
        cout << "Maximum = " << a;
    else
        cout << "Maximum = " << b;
}

int main() {
    int x, y;
    cin >> x >> y;
    maximum(x, y);
    return 0;
}
