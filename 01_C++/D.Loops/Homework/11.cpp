// Take “n” as input from user and print the following sequence-
// 1 (n) 2 (n-1) 3 (n-2) …

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<i<<" "<<i+n-1<<" ";
    }
}