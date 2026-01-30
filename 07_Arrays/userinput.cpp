#include<iostream>
using namespace std;

int main(){
    int arr[5];

    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "\nYou entered the following numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    cout<<"First Element: "<<arr[0]<<endl;
    cout<<"Second Element: "<<arr[1]<<endl;

    arr[2] = 10;
    cout<<"Modified the array: "<<arr;

    for (int i = 0 ; i<5; i ++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}