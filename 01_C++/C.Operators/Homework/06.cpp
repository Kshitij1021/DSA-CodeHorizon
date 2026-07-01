// Take a positive integer input from the user and check if it is divisible by both 3 and 5. Do not use the logical AND (&&) operator inside your conditional test statement. (Hint: Think about how mathematical properties like the Lowest Common Multiple (LCM) can reduce multi-step rules).
// Sample — Input: 30 ⇒ Output: Divisible by both 3 and 5

#include<iostream>
using namespace std;

int main()
{
    // We can use LCM of the numbers instead of using the && operator
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    if(a%15 == 0)
        cout<<"The number "<<a<<" is divisible by 3 and 5 both";
    
    else
        cout<<"The number "<<a<<" is not divisible by 3 and 5 both";
}