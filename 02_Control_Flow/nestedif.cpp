#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number:"<<endl;
    cin>>a;
    if (a>0)
    {
        if (a % 2 == 0)
        {
            cout<<"The number is even"<<endl;
        }
        else 
        {
            cout<<"The number is odd"<<endl;
        }
    }
    else if (a==0)
    {
        cout<<"The number is zero"<<endl;
    }
    else 
    {
        cout<<"The number is negative"<<endl;
    }
    return 0;
}