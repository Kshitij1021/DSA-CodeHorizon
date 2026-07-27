// Print this series – 99, 95 ,91, 87… upto all terms which are positive.

#include<iostream>
using namespace std;

int main()
{
    for(int i=99; i>=1; i-=4)
    {
        cout<<i<<" ";
    }
}