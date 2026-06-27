// Convert the value of entered octal number into decimal form

// example: 20516

// Required answer: 8526

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    int rem=0;                                              
    int sum=0;
    int num=a;
    int multiple_eight=1;

    while(num>0)
    {
        rem=num%10;
        num/=10;

        sum+=rem*multiple_eight;

        multiple_eight*=8;
    }
    cout<<sum;
}