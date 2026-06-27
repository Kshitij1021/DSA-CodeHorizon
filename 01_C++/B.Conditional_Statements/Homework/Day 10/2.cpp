//  Take an input n from the user, and create a pattern like below, for n=5, we have output like this.    
//          A
//        B B
//      C C C
//    D D D D
//  E E E E E

#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the last alphabet: ";
    cin>>a;

    for(char row='A'; row<=a; row++)
    {
        for(int space=a-row; space>=1; space--)
        {
            cout<<"  ";
        }

        for(char alpha='A'; alpha<=row; alpha++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}
