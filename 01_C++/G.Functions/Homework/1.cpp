// Find the cube of a number using Function. 

#include<iostream>
using namespace std;

int cube(int n)
{
   int ans;
   {
      ans = n*n*n;
   }
   return ans;
}

int main()
{
   int a;
   cout<<"Enter the number: ";
   cin>>a;

   cout<<cube(a);
}