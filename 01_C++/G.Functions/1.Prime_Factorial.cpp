#include<iostream>
using namespace std;

// Function defining for Prime Numbers

bool Prime(int n)                                                    //  Defining the name and Parameters of Function "Prime"
{
    {
        if(n<2)
            return 0;                                               //  Ending the Function if condition satisfy

        for(int i=2; i<n; i++)
        {
            if(n%i==0)
                return 0;                                       
        }   
        return 1;                                                   //  Value of function if none of the condition satisfies
    }
}


// Function defining for Factorial

int Factorial(int n)                                                //  Defining the name and Parameters of Function "Factorial"
{
    {
        int ans=1;
        for(int i=1; i<=n; i++)
        {
            ans*=i;
        }
        return ans;                                                 //  Returning the final answer of the function
    }
}


int main()
{
    int n, j;
    cout<<"Enter the first number: ";
    cin>>n;
    cout<<"Enter the second number: ";
    cin>>j;


    if(Prime(n)==0)                                                                 // Calling the Function "Prime"
        cout<<"The number "<<n<<" is not a Prime number";

    else
        cout<<"The number "<<n<<" is a Prime number";

    cout<<endl<<"The factorial value of "<<j<<" is "<<Factorial(j);                 // Calling the Function "Fatorial"
}