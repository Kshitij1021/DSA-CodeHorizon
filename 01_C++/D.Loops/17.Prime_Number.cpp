// Check whether the entered number is a Prime number 

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int n;
   cout<<"Enter the number: ";
   cin>>n;

   bool isPrime = true;

   for(int i=2; i*i<=n; i++)
   {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
   }

   if( n < 2)
   {
        cout<<"The number "<<n<<" is neither a Prime Number nor a Composite Number";
   }

   else if(isPrime == true)
   {
        cout<<"The number "<<n<<" is a Prime Number";
   }

   else
   {
        cout<<"The number "<<n<<" is a Composite number";
   }
}