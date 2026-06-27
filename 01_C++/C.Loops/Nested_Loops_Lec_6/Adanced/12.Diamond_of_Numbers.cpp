// Print: 

//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
//   1 2 3 4 3 2 1
//     1 2 3 2 1
//       1 2 1
//         1

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the highest number: ";
    cin>>a;

    for(int uprow=1; uprow<=a; uprow++)
    {
        for(int space=a-uprow; space>=1; space--)
        {
            cout<<"  ";
        }

        for(int numleft=1; numleft<=uprow; numleft++)
        {
            cout<<numleft<<" ";
        }

        for(int numright=uprow-1; numright>=1; numright--)
        {
            cout<<numright<<" ";
        }
        cout<<endl;
    }

    for(int downrow=1; downrow<=a-1; downrow++)
    {
        for(int space=1; space<=downrow; space++)
        {
            cout<<"  ";
        }

        for(int leftnum=1; leftnum<=a-downrow; leftnum++)
        {
            cout<<leftnum<<" ";
        }

        for(int rightnum=a-downrow-1; rightnum>=1; rightnum--)
        {
            cout<<rightnum<<" ";
        }
        cout<<endl;
    }
}
