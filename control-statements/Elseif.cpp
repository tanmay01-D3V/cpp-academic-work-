#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "whats your age: ";
    cin >> a;

    if (a < 13)
    {
        cout << "you are a chid";
    }
    else if(13 >= a && a < 18)
    {
        cout << "you are a teen";
    }
    else
    {
        cout << "you are adult";
    }
    return 0;
}