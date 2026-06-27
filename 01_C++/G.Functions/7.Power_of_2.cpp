// Check whether the entered number is a power of 2

// e.g. 56 --> Return 0
//      64 --> Return 1

//               56                                                              64

//  Base     Quotient(Num)     Remainder                            Base     Quotient(Num)     Remainder
//   2           56                                                  2           64               
//   2           28               0                                  2           32               0
//   2           14               0                                  2           16               0
//   2            7               0                                  2            8               0
//   2            3               1                                  2            4               0
//   2            1               1  <--                             2            2               0
//   2            0               1                                  2            1               0  <--
//                                                                   2            0               1

// We don't have to check last rem (i.e, num-last = 1)

#include<iostream>
using namespace std;

bool Power(int n){
    int num=n;
    int rem;

    while(num!=1){
        rem = num%2;

        if(rem==1)
            return 0;

        else
            num = num/2;
    }
    return 1;
}

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    if(a<1)
        cout<<"The number "<<a<<" is not the power of 2";

    else if(Power(a)==0)
        cout<<"The number "<<a<<" is not the power of 2";

    else
        cout<<"The number "<<a<<" is power of 2";
}