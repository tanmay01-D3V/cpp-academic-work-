#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0)
        cout << "The number is zero" << endl;
    else
        cout << "The number is non-zero" << endl;

    return 0;
}
