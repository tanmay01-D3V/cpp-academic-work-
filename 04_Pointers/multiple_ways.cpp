#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the var: ";
    cin>>a;
    int var = a;
    int* point_var = &var;

    cout<<endl<<"The value of var: "<<a<<endl;

    cout<<"*pointer variable: "<<*point_var<<endl
    <<endl;
    cout<<"Changed value of the var to 7: "<<endl;
    var = 7;

    cout<<"var: "<<var<<endl;
    cout<<"point_var : "<< *point_var <<endl
    <<endl;

    cout<<"Changed the value of the var to 10: "<<endl;
    *point_var = 10;

    cout<<"var: "<<var<<endl;
    cout<<"point_value: "<< *point_var <<endl;

    return 0;
}