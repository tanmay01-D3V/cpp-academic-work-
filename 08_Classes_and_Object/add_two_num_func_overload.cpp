#include<iostream>
using namespace std;

class Add{
    public:
        void add(int a, int b)
        {
            cout << "The sum is: " << a + b << endl;
        }
        void add(int a, int b, int c)
        {
            cout << "The sum is: " << a + b + c << endl;
        }
};

int main()
{
    Add obj1;

    int a, b, c;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    obj1.add(a, b);

    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    obj1.add(a, b, c);

    return 0;
}