#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    cout << "After swapping, x = " <<
     a << " and y = " << b << endl;
}
int main() {
    int x = 5, y = 10;
    cout << "Before swapping, x = " << x << " and y = " << y << endl;
    swap(x, y);
    return 0;
}