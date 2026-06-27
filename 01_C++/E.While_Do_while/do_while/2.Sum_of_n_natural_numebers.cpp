// Print the sum of first n natural number

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;

    int Sum = 0;
    int i=1;

    do{
        Sum = Sum + i;

        i++;
    }while(i<=a);

    cout<<Sum;
}