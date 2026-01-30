#include <iostream>
using namespace std;

void square(int &x) {
    x = x * x;
}

int main() {
    int a;
    cin >> a;
    square(a);
    cout << "Square = " << a;
    return 0;
}
