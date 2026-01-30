#include <iostream>
using namespace std;

int cube(int x) {
    return x * x * x;
}

int main() {
    int a;
    cin >> a;
    cout << "Cube = " << cube(a);
    return 0;
}
