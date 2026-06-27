// Reverse the entered integer

// e.g. 7854

// Required answer: 4587

// 7854 % 10 =   4  (I value of rem)
// 7854 / 10 = 785  (I value of num)

// 785  % 10 =   5  (II value of rem)
// 785  / 10 =  78  (II value of num)

// 78   % 10 =   8  (III value of rem)
// 78   / 10 =   7  (III value of num)

// 7    % 10 =   7  (IV value of rem)
// 7    / 10 =   7  (IV value of num)

// *ans = ans*10 + rem*

#include<iostream>
using namespace std;

int Reverse(int &a){
    int ans=0;
    int rem=0;
    int num;

    for(int num=a; num>0; num=num/10)
    {
        rem = num%10;
        ans = ans*10 + rem;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<Reverse(n);
}