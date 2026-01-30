#include <iostream>
using namespace std;

int main() {
    int num, original, remainder, digits = 0;
    double result = 0.0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    if ((int)result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
