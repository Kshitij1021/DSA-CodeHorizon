#include <iostream>
using namespace std;

int main()
{
    int choice = 0;
    int fund, balance = 0;
    while (choice != 4)
    {
        cout << "====== ATM MENU ======" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl
             << endl;

        cout << "Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Your total balance is " << balance;
            cout << endl
                 << endl;
        }

        else if (choice == 2)
        {
            cout << "Enter amount: ";
            cin >> fund;
            balance += fund;
            cout << endl
                 << endl;
        }

        else if (choice == 3)
        {
            cout << "Enter amount: ";
            cin >> fund;

            if (balance > fund)
            {
                balance -= fund;
                cout << endl
                     << endl;
            }

            else
                cout << "Balance Insufficient";
                cout << endl
                     << endl;
        }

        else
            cout << "Thank You!";
            cout << endl
                << endl;
    }
}