// Print a table upto asked times

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the number of which table is required: ";
    cin>>a;
    cout<<"Enter the number till which times the table is required: ";
    cin>>b;

    int n=1;
    while(n<=b)
    {
        cout<<a<<" X "<<n<<" = "<<a*n<<endl;
        n++;
    }
}