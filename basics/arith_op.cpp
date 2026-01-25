#include <iostream>
using namespace std;
int main()
{
    int a,b;

    cout << "Enter two numbers: " << endl;
    cin>>a>>b;

    cout << "Addition: a + b = " << a + b << endl;
    cout << "Subtraction: a - b = " << a - b << endl;
    cout << "Multiplication: a * b = " << a * b << endl;
    cout << "Integer division: a / b = " << a / b << endl;
    cout << "Floating division: (double)a / b = " << (float) a / b << endl;
    cout << "Modulo: a % b = " << a % b << endl;

    cout << "pre-increment: a++ is = " << a++ <<endl;
    cout << "post-increment: ++a is = " << ++a <<endl;
    cout << "pre-decrement: b-- is = " << b-- <<endl;
    cout << "post-decrement: --b is = " << --b <<endl;
    
    return 0;
}