#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Emter the number of elements u want in array: ";
    cin >> n;

    int* arr = new int[n];
    cout<<"Please enter Array ELements: ";
    for (int i = 0;i<n;i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        cout<<arr [i] << " ";

    delete[] arr;
    return 0;
}

