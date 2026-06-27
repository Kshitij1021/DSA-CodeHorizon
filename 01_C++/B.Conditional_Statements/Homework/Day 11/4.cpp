// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//           *
//          * *
//         * * *
//        * * * *
//       * * * * *
//       * * * * *
//        * * * *
//         * * *  
//          * *  
//           *

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the max. num stars in a row: ";
    cin>>a;

    for(int uprow=1; uprow<=a; uprow++)
    {
        for(int spaceup=a-uprow; spaceup>=1; spaceup--)
        {
            cout<<" ";
        }

        for(int upstar=1; upstar<=uprow; upstar++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int downrow=a; downrow>=1; downrow--)
    {
        for(int downspace=a; downspace>downrow; downspace--)
        {
            cout<<" ";
        }

        for(int downstar=downrow; downstar>=1; downstar--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
