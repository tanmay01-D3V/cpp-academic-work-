#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x=10,y=30;
    swap(&x,&y);
    cout<<"Value of x is: "<< x << endl;
    cout<<"Value of y is: "<< y << endl;
    return 0 ;
}