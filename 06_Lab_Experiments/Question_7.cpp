#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    switch(n % 2) {
        case 0: cout << "Even number"; break;
        case 1: cout << "Odd number"; break;
    }
    return 0;
}
