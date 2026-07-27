#include<iostream>
#include<climits>
using namespace std;

int main()
{
    // int alternatives     --> short, long long

    // Datatype: int        --> 4 Bytes
    // Range of int         --> [-2147483648, 2147483647]
    //                            [-(2^31), (2^31)-1]
    int x = INT_MIN;
    int y = INT_MAX;
    cout<<x<<endl<<y<<endl;


    // Datatype: short      --> 2 Bytes
    // Range of short       --> [-32768, 32767]
    //                       [-(2^15), (2^15)-1]
    short a = INT16_MIN;
    short b = INT16_MAX;
    cout<<a<<endl<<b<<endl;


    // Datatype : long long --> 8 Bytes
    // Range of long long   --> [-9223372036854775808,  9223372036854775807]
    //                                     [-(2^63), (2^63)-1]
    long long p = LLONG_MIN;
    long long q = LLONG_MAX;
    cout<<p<<endl<<q<<endl;
}