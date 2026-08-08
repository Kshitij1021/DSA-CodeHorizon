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
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=0; i<=n; i++)
    {
        for(int j=(n-i); j>=1; j--)
        {
            cout<<"  ";
        }

        for(int k=0; k<=i; k++)
        {
            cout<<(fact(i)/((fact(k)*fact(i-k))))<<"   ";
        }
        cout<<endl;
    }
}