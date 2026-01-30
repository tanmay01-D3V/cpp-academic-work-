#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;

    cout<<"The value of var is "<<*p;

    *p = 5;

    cout<<"\n changing the value of var to: "<<a;

    return 0;
}
