#include<iostream>
using namespace std;
int main()
{
    int n, sum=0 , i =1 ;

    cout<<"Enter the value of N: ";
    cin>>n;

    while (i <=n){
        sum +=i;
        i++;
    }

    cout<<"The Sum of first"<<n<< "natural number is " << sum <<endl;
}