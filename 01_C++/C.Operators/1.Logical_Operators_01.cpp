// Print "Yes" if a < b < c 
// else Print "No" 

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;

    if(a<b && b<c)                                          // Value will be true if both conditions satisfy
        cout<<"Yes";
    else
        cout<<"No";
}