#include <iostream>
using namespace std;

void addTen(int x) {
    x = x + 10;
    cout << "After adding 10 = " << x;
}

int main() {
    int a;
    cout<<"Enter a number: ";
    cin >> a;
    addTen(a);
    return 0;
}
