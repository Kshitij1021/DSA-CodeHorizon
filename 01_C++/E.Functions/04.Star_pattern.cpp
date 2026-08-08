#include<iostream>
using namespace std;

void star(int a)
{
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    int a, b, c;
    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    cout<<"c = ";
    cin>>c;

    star(a);
    star(b);
    star(c);
}