#include <iostream>
using namespace std;

void increment(int &x) {
    x = x + 1;
}

int main() {
    int a;
    cin >> a;
    increment(a);
    cout << "After increment = " << a;
    return 0;
}
