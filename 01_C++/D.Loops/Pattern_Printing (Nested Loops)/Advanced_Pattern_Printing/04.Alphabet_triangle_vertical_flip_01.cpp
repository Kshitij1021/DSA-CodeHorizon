// Taking n as input, print vertically flipped alphabet triangle with n number of rows

// Input : 5
// Output :
//          A
//        A B
//      A B C 
//    A B C D
//  A B C D E

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    
    for(int i=n; i>=1; i--)
    {
        int num = 65;
        for(int j=1; j<=n; j++)
        {
            if(j>=i)
            {
                cout<<(char)(num)<<" ";
                num++;
            }

            else
                cout<<"  ";
                
        }
        cout<<endl;
    }
}