// Taking n as input, print vertically flipped number triangle with n number of rows

// Input : 6
// Output :
//            A
//          B B
//        C C C
//      D D D D
//    E E E E E
//  F F F F F F

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    int num = 65;
    
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n; j++)
        {
            if(j>=i)
                cout<<(char)(num)<<" ";

            else
                cout<<"  ";
        }
        num++;
        cout<<endl;
    }
}