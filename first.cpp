//Task first: Number Guess Game!

#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <limits>   

using namespace std;

void guessNumber() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int numberToGuess = rand() % 100 + 1;

    int userGuess;

    cout << "Guess the number (between 1 and 100)!" << endl;

    while (true) {
        // Get user input
        cout << "Enter your guess: ";
        cin >> userGuess;

        // Check if input is valid
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
            cout << "Please enter a valid number." << endl;
            continue;
        }

        // Only print the user's guess
        cout << "Your guess is " << userGuess << endl;

        // Note: The game will continue running indefinitely, with no feedback
    }
}

int main() {
    // Call the function to run the game
    guessNumber();
    return 0;
}
