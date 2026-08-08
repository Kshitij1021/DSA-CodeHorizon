#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    int binary = 0;
    int multiple10 = 1;

    while(n!=0)
    {
        binary = (binary)+((n%2)*(multiple10));
        n /= 2;
        multiple10 *= 10;
    }

    cout<<binary;
}