#include <iostream>
using namespace std;

class number
{
public:
    int value;
    number(int v)
    {
        value = v;
    }

    number operator+(number obj)
    {
        return value + obj.value;
    }
};
int main()
{
    number n1(5);
    number n2(10);
    number sum = n1 + n2;
    cout << "Sum of " << n1.value << " and " << n2.value << " is : " << sum.value << endl;
    return 0;
}