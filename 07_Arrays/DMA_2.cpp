#include<iostream>
using namespace std;

int main() {
    int *a, *b;
    a = new int;
    b = new int;

    cout << "Enter first number: ";
    cin >> *a;
    cout << "Enter second number: ";
    cin >> *b;
    cout << "Sum = " << *a + *b << endl;

    delete a;
    delete b;

    return 0;
}