#include<iostream>
using namespace std;
int main()
{
    char input;
    cout<<"Enter a character: ";
    cin>>input;

    switch (input){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        cout<<"The char is a vowel";
        break;

        default:
        cout<<"The char is consonants";
    }
    return 0;
}