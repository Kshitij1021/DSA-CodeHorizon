// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//          E
//        E D
//      E D C
//    E D C B
//  E D C B A


#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the last alphabet: ";
    cin>>a;

    char b='A';

    for(char row=a; row>=b; row--)
    {
        for(char space=row-1; space>=b; space--)
        {
            cout<<"  ";
        }

        for(char alpha=a; alpha>=row; alpha--)
        {
            cout<<alpha<<" ";
        }
        cout<<endl;
    }
}