/*
Write a program that generates a random number between 1 and 100 and asks the user
to guess what the number is. If the user’s guess is higher than the random number, the
program should display "Too high. Try again." If the user’s guess is lower than the
random number, the program should display "Too low. Try again." The program
should use a loop that repeats until the user correctly guesses the random number.
Then the program should display "Congratulations. You figured out my number."

Verify the number entered by the user is between 1 and 100.

Enhance the program that you wrote for Programming Challenge 10 so it keeps a count
of the number of guesses the user makes. When the user correctly guesses the random
number, the program should display the number of guesses along with the message of
congratulations.*/
//Farhan Azad 9/28/2018
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    unsigned seed;
    int randNum;
    int guess;
    int numGuess;
    srand(static_cast<unsigned>(time(0)));

    randNum = 1 + rand()%100;

    cout << "Please guess a number";
    cin >> guess;

    numGuess = 1;


    while  (guess != randNum)
        {
            if (guess < 0 || guess > 100)
            {
                cout << "Invalid data. Try again.";
                cin >> guess;
            }

            else if ( guess > randNum)
            {
                cout << "Too high. Try again.";
                cin >> guess;
            }

            else if (randNum > guess)
            {
                cout << "Too low. Try again.";
                cin >> guess;
            }

            numGuess++;
        }



    if (guess == randNum)
    {
        cout << "Congratulations. You figured out my number.\n";
        cout << "It took you "<<numGuess<<" guesses!";
    }


    return 0;
}
