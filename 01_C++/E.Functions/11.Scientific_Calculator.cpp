#include<iostream>
#include<cmath>
using namespace std;

double addition(double a, double b)
{
    return (a + b);   
}

double subtraction(double a, double b)
{
    return (a - b);   
}

double multiplication(double a, double b)
{
    return (a * b);   
}

double division(double a, double b)
{
    return (a / b);   
}

double power(double a, double b)
{
    return pow(a, b);   
}

double squareRoot(double a)
{
    return sqrt(a);
}

int main()
{
    double a, b;
    int choice = 1;
    while(choice != 7)
    {
        cout<<"========== SCIENTIFIC CALCULATOR =========="<<endl<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Power"<<endl;
        cout<<"6. Square Root"<<endl;
        cout<<"7. Exit"<<endl<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice == 5)
        {
            cout<<"a(Base) = ";
            cin>>a;

            cout<<"b(Power) = ";
            cin>>b;

            cout<<power(a, b);
        }

        else if(choice == 6)
        {
            cout<<"Enter your Number: ";
            cin>>a;
            cout<<squareRoot(a);
        }

        else if(choice ==7)
            break;

        else
        {
            cout<<"a = ";
            cin>>a;
            cout<<"b = ";
            cin>>b;

            if(choice == 1)
                cout<<addition(a, b);

            else if(choice == 2)
                cout<<subtraction(a, b);

            if(choice == 3)
                cout<<multiplication(a, b);

            if(choice == 4)
                cout<<division(a, b);
        }

        cout<<endl<<endl;
    }
}