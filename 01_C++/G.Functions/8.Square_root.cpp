// Find the GIF of square root of entered number

// e.g. 59

// Required ans = 7

#include<iostream>
using namespace std;

int square_root(int n){
    int i=0;
    while(i*i<=n)
    {
        if(i*i==n)
            return i;

        else
            i+=1;
    }
    return i-1;
}

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    if(square_root(a)*square_root(a)==a)
        cout<<"The square root of the number "<<a<<" is "<<square_root(a);

    else
        cout<<"The GIF of square root of the number "<<a<<" is "<<square_root(a);
}