#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 10)
        cout << num << " is greater than 10" << endl;
    else
        cout << num << " is not greater than 10" << endl;

    return 0;
}
