#include<iostream>
using namespace std;

int fibonacci(int a){
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    else 
        return fibonacci(a-1) + fibonacci(a - 2);
}

int main(){
    int a;
    cout<<"Enter number of terms: ";
    cin>>a;
    cout<<"fibonacci series : ";
    for (int i =0 ; i < a; i ++){
        cout<< fibonacci(i) << " ";
    }
    return 0;
}