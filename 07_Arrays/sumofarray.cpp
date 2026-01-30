//write the program in C++ to find the sum of an element in array
#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = arr[i] + sum;
    }

    cout << "Sum of array elements = " << sum << endl;

    return 0;
}
