//  return-type : void
//          is used when no return value is needed in the function. (e.g. when we want to print the text in output)

#include<iostream>
using namespace std;

void fun()                                                                  
{
    cout<<"This function doesn't need any return type";
}

int main()
{
    fun();                                                                  // Calling the void function to print the text
}