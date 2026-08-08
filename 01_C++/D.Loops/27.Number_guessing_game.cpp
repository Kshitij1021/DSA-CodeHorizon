#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device rd;          // Seed
    mt19937 gen(rd());         // Random number generator

    uniform_int_distribution<> dist(1, 100); // Random number from 1 to 100

    
    int n, randomNumber;
    randomNumber = dist(gen);

    cout<<randomNumber;
    
    for (int i = 1; i <= 20; i++)
    {
        cout << "Attempt " << i << "/20" << endl;
        cout << "Enter your guess: ";
        cin >> n;

        if (n < randomNumber)
        {
            cout << "Go Higher!" << endl
                 << endl;
        }
        else if (n > randomNumber)
        {
            cout << "Go Lower!" << endl
                 << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in "
                 << i << " attempts." << endl
                 << endl;
            return 0;
        }
    }

    cout << "Game Over! You've used all 20 attempts." << endl;
    cout << "The correct number was " << randomNumber << "." << endl;

    return 0;
}