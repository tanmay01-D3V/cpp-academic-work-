#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers a,b,c: ";
    cin>>a>>b>>c;
    if (a>b && b>c)
    {
        cout<<"a is greater than b,c"<<endl;
    }
    else if ( b>c && c>a)
    {
        cout<<"b is greater than a,c"<<endl;
    }
    else
    {
        cout<<"c is greater than b,a"<<endl;
    }
}