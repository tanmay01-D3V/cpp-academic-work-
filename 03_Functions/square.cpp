#include<iostream>
using namespace std;

int square(){
    int a;
    cout<<"Enter the number you want square of : ";
    cin>>a;
    return a * a;
}

int main(){
    int result;
    result = square();
    cout<<"Square is : "<<result;
    return 0;
}