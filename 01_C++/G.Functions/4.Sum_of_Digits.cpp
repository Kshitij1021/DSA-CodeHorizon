// Print the sum of all digits in a number

// e.g. 853

// Required ans = 8 + 5 + 3 = 16 ---> 1 + 6 = 7

// 853 % 10 = 3             (I value of rem)
// 853 / 10 = 85            (I value of num)

// 85  % 10 = 5             (II value of rem)
// 85  / 10 = 8             (II value of num)

// 8   % 10 = 8             (III value of rem)

#include<iostream>
using namespace std;

int add_digit(int num)
{
    int rem;
    while(num>=9)
    {
        int sum=0;
        while(num>0)
        {
            rem=num%10;
            num=num/10;

            sum=sum+rem;
        }
        num=sum;
    }
    return num;
}

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    cout<<add_digit(a);
}