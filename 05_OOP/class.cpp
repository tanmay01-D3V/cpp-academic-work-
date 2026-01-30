#include <iostream>
using namespace std;

class number
{
public:
    int value;
    void show()
    {
        cout << "Value is : " << value << endl;
        cout << "Square of "<<value<<" is : "<< value*2 <<endl;
    }
};

int main()
{
    number n1;
    n1.value = 32;
    n1.show();
    return 0;
}
