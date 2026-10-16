#include<iostream>
using namespace std;

int main()
{
    int marks[] = {96, 43, 63, 68, 87};
    cout<<marks[3]<<endl;
    marks[3] = 78;
    cout<<marks[3]<<endl;


    // Size of an array

    // [sizeof(array)] / [sizeof(datatype of array)]

    cout<<(sizeof(marks)/sizeof(int));
}