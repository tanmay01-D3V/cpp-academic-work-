//WAP in C++ to add 2 Numbers using Function with No Return Value & No Argument
#include<iostream>
using namespace std;
void add(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"The SUM of these number is: "<<a+b<<endl;
}

int main(){
    add();
    return 0;
}