// Print all the factors of entered number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The factors of the number "<<n<<" are: ";
    for(int i=1; i<=n; i++)
    {
        if(n % i == 0){
            cout<<i<<" ";
        }
    }
}