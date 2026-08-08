// Find the max of three numbers using inbuilt function
#include<iostream>
#include<cmath>
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
    int x = max(a, b);
    cout<<max(x, c);
}