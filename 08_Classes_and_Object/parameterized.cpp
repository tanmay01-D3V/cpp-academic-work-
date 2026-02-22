#include<iostream>
using namespace std;

class abc
{
    public:
    int id;

    abc()
    {
        cout<<"Default constructor called"<< endl;
        id = -1;
    }

    abc (int x){
        cout<<"Parameterized Constructor called "<<endl;
        id = x;
    }
};

int main()
{
    abc obj1;
    cout<<"id is: "<<obj1.id<<endl;

    abc obj2(21);
    cout<<"id is: "<<obj2.id<<endl;
    return 0;
}