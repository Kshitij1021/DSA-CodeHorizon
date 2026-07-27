// Write a program to construct an Alphabet Palindrome Pyramid. For a given n, each row should print letters sequentially increasing to a peak character, and then symmetrically decreasing back to ’A’. Use precise spacing to center the pyramid.
// Sample — Input: n = 4 ⇒ Output:
//       A 
//     A B A
//   A B C B A
// A B C D C B A

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        char ch = 'A';
        for(int j=1; j<=n; j++)
        {
            if(j>(n-i))
                cout<<ch++<<" ";

            else
                cout<<"  ";
        }

        ch='A';

        for(int j=1; j<i; j++)
        {

            cout<<ch++<<" ";
        }
        cout<<endl;
    }
}