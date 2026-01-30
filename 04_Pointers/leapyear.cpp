#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the year: ";
    cin>>a;

    int *p = &a;

    if ((*p % 4 == 0 && *p % 100 != 0) || (*p % 400 == 0))
        cout << "Leap Year";
    else
        cout << "Not a Leap Year";

    return 0;
}