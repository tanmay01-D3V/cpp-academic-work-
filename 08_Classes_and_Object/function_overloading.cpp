#include<iostream>
using namespace std;

class Poly{
    public:
        void func(int x)
        {
            cout<<"value of x is : "<< x <<endl;
        }
        void func(double x)
        {
            cout<<"value of x is : "<< x <<endl;
        }
        void func(int x, int y)
        {
            cout<<"value of x and y is : "<< x <<","<< y <<endl;
        }
};

int main()
{
    Poly obj1;
    obj1.func(7);
    obj1.func(3.333);
    obj1.func(34, 67);
    return 0;
}
