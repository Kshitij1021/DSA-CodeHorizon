#include<iostream>
using namespace std;

int fact(int a)
{
    int factorial = 1;
    for(int i=1; i<=a; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, r;
    cout<<"n = ";
    cin>>n;    
    cout<<"r = ";
    cin>>r;

    cout<<(fact(n) / (fact(r)*fact(n-r)));
}