// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//              A
//            A B A
//          A B C B A
//        A B C D C B A
//      A B C D E D C B A


#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the last letter: ";
    cin>>a;

    for(char row='A'; row<=a; row++)
    {
        for(int space=a-row; space>=1; space--)
        {
            cout<<"  ";
        }

        for(char alpha='A'; alpha<=row; alpha++)
        {
            cout<<alpha<<" ";
        }

        for(char after=row-1; after>='A'; after--)
        {
            cout<<after<<" "; 
        }
        cout<<endl;
    }
}