#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "===== Number Guessing Game =====\n";

    while (guess != secret)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secret)
        {
            cout << "Too High\n";
        }
        else if (guess < secret)
        {
            cout << "Too Low\n";
        }
        else
        {
            cout << "Congratulations! You guessed the number.\n";
            cout << "Attempts: " << attempts;
        }
    }

    return 0;
}