#include <iostream>
using namespace std;
int main()
{
    int i = 1;
start:
    cout << i <<" ";
    i++;

    if (i<=10)
    goto start;

    return 0;
}