// Print 1 to n natural numbers and break the loop for asked value

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;

    int i=1;
    do{
        if(i==a)                        // If condition satisfies, not more loop continue after that value
            break;
        
        cout<<i<<" ";
        i++;
    }while(i<=10);
}



