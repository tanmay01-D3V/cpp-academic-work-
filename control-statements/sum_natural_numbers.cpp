#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;
    
    // Get input from user
    cout << "Enter the value of N: ";
    cin >> n;
    
    // Calculate sum using while loop
    while (i <= n) {
        sum += i;
        i++;
    }
    
    // Display the result
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    
    return 0;
}
