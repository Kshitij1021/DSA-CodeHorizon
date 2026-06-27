#include<iostream>
using namespace std;

int main()
{

    int Salary;                                                 // Declaration of variable "Salary" as Integer value 
    cout<<"Minimum Salary Offered(in LPA): ";
    cin>>Salary;                                                // Taking the value of Salary

    if(Salary > 10)                                             // Condition stated,
    {
        cout<<"Accepted";                                       // If condition value is true, this code will run
    }
    else
    {
        cout<<"Rejected";                                       // If condition value is false, this code will run
    }
    // If in "if/else" only one line is written, no need to use "{ }"
}