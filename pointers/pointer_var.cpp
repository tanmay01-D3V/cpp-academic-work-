#include<iostream>
using namespace std;

int main(){
    int var = 3;

    int* pointer_var = &var;

    cout <<"var: " << var << endl;

    cout <<"Address of var: "<< &var <<endl;

    cout<<"point_var: "<< pointer_var<< endl;

    cout<<"Content of the address pointed to by point_var: "<< *pointer_var <<endl;

    return 0;
}