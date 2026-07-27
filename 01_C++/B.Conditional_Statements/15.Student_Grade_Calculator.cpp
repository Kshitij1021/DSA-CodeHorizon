// Create a Student Grade Calculator

#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if((marks<=100) && (marks>=90))
        cout<<"Your Grade is A+";

    else if((marks<90) && (marks>=80))
        cout<<"Your Grade is A";

    else if((marks<80) && (marks>=70))
        cout<<"Your Grade is B";

    else if((marks<70) && (marks>=60))
        cout<<"Your Grade is C";

    else if((marks<60) && (marks>=50))
        cout<<"Your Grade is D";

    else if((marks<50) && (marks>=0))
        cout<<"Your Grade is E";

    else
        cout<<"Enter valid marks";
}