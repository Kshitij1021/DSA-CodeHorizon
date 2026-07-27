// Count the number of digits in the entered number

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;

    int count = 0;

    if (num == 0)
        count++;
    while (num != 0)
    {
        num /= 10;

        count++;
    }

    cout<<count;
}