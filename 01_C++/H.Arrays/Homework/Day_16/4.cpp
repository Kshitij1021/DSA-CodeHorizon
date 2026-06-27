// Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

#include<iostream>
using namespace std;

int main()
{
    char arr[26];
    int i=0;
    char a='a';
    while(i<26)
    {
        arr[i]=a;

        i++;
        a++;
    }

    cout<<"Your array is: ";
    for(int i=0; i<26; i++)
    {
        cout<<arr[i]<<" ";
    }
}