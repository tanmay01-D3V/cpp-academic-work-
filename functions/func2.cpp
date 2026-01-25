//WAP to check the number is even or odd using function
#include<iostream>
using namespace std;

void Even(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if (a%2==0){
        cout<<"The number is even "<<endl;
    }
    else{
        cout<<"The nuberm is odd "<<endl;
    }
}

int main(){
    Even();
    return 0;
}