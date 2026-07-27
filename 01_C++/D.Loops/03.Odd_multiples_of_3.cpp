// Print all the odd numbers divisible by 3 --> 3, 9, 15, 21...

#include<iostream>
using namespace std;

int main()
{
    // for(int i=1; i<=100; i++)
    // {
    //     if((i % 2 == 1) && (i % 3 == 0))
    //     {
    //         cout<<i<<" ";
    //     }
    //     // Iteration Count = 100 (Not a efficient code)
    // }

    for(int i=3; i<=100; i+=6)
    {
        cout<<i<<" ";
        // Iteration Count = 17 (Efficient Code)
    }
}