#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int *p = &a;

    cout << "Cube = " << (*p) * (*p) * (*p);
    return 0;
}
