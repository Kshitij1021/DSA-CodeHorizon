// Create a mini banking application demonstrating Global Variables. Declare a global variable double balance = 0.0;. Write two functions deposit(double amount) and withdraw(double amount) that modify this global state. Print the final balance from main().
// Sample — deposit(500), withdraw(200) ⇒ Output: Balance: 300

#include<iostream>
using namespace std;

double balance = 0.0;

#include<iostream>
using namespace std;

void deposit(int dep)
{
    balance += dep;
}

void withdraw(int with) 
{
    balance -= with;
}

int main()
{
    int a, b;
    cout<<"Current Balance: "<<balance<<endl;
    cout<<"Deposit Money: ";
    cin>>a;
    cout<<"Withdraw Money: ";
    cin>>b;

    deposit(a);
    withdraw(b);

    cout<<"Your new Balance is "<<balance;
}