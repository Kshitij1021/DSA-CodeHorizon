// Print 1 to n natural numbers

#include<iostream>
using namespace std;

int main()
{
    int b;
    cout<<"Enter the last number: ";
    cin>>b;

    int a = 1;                                                      // Initialisation
    while(a<=b)                                                     // Breaking condition
    {
        cout<<a<<" ";
        a++;                                                        // Loop condition
    }
}