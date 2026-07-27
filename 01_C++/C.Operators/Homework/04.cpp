// Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

#include<iostream> 
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;

    if(a>b | a>c)
        cout<<"Yes";
    else    
        cout<<"No";
}
