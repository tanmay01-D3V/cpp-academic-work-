#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"what's your age:";
    cin >> a;
    
    if (a>0)
    {
        if (a>=18)
        {
            cout<<"you are alligible to vote" << endl;
        }else 
        {
            cout<<"you are not alligible to vote";
        }
    }
    else if (a<0)
    {
        cout<<"the number is negative but your life is positive";
    }
    else
    {
        cout<<"the number is positive but your like is negative" << endl;
    }
}