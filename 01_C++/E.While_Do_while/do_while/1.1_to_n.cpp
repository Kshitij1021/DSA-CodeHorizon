// Print 1 to n natural numbers

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;

    int i=1;                                                        // Initialization
    do
    {
        cout<<i<<" ";                                               // Output

        i++;                                                        // Loop condition
    }while(i<=a);                                                   // Break condition
}