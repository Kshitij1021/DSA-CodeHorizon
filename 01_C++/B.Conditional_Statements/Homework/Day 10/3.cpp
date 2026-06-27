//  Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//          5
//        5 4
//      5 4 3
//    5 4 3 2 
//  5 4 3 2 1


#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;
    
    for(int row=1; row<=a; row++)    
    {
        for(int space=a-row; space>=1; space--)
        {
            cout<<"  ";
        }

        for(int num=a; num>a-row; num--)
        {
            cout<<num<<" "; 
        }
        cout<<endl;
    }
}