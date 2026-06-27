// Print "Data Structure and Algorithm” n times using Function.

#include<iostream>
using namespace std;

void print(int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<i<<". Data Structure and Algorithm"<<endl;
    }
}

int main()
{
    int a;
    cout<<"Enter the number of times repetition required: ";
    cin>>a;

    print(a);
}