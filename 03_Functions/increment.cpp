#include<iostream>
using namespace std;

void increment(int &n){
    n= n+1;
}

int main(){
    int a;
    cout<<"Enter any number: ";
    cin>>a;
    increment (a);
    cout<<"value = "<<a;
    return 0;
}