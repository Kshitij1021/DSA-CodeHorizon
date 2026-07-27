// Taking n(odd number) as input, print:

// Input : n = 7
// Output : 

//        *
//        *
//        *
//  * * * * * * *
//        *
//        *
//        *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    if(n % 2 == 0)
        cout<<"Enter an odd number";

    else
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if((i == ((n+1)/2)) || (j == (n+1)/2))
                    cout<<"* ";

                else
                    cout<<"  ";
            }
            cout<<endl;
        }
    }
}