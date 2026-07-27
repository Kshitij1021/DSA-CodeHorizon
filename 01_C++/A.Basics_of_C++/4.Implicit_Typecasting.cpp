#include<iostream>
using namespace std;

int main()
{

    int a = 56;             // Assigning the value of a(Integer) as 56
    char b = a;             // Assigning the value of b(character) as a(Integer)
    cout<<b<<endl;          // Print the value of a as a character                 // 56(Integer) is converted into 8(character) acc. to ASCII value




    int c = 87;             // Assigning the value of c(Integer) as 87
    char d = 'e';           // Assigning the value of d(character) as e
    c = d;                  // Assigning the value of c(Integer) as e(value of character d)    //e(character) = 101(Integer)

    cout<<c<<endl;          // Printing the value of c after converting into character value of e
    cout<<d<<endl;



// Since the integer value for 982474 is first converted into character value and then into binary value upto 32 bits, int can read only upto 8 bits hence rest binary values can't be executed and hence data loss occurs.
    int h = 982474;
    char g;
    g = h;

    cout<<g;
}