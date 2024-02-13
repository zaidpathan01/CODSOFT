#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
srand(time(0));
int secretNumber = rand() % 100 + 1;
int userGuess;
cout << "Welcome to the Number Guessing Game!" << endl;
do {
cout << "Enter your guess: ";
cin >> userGuess;
if (userGuess > secretNumber) {
cout << "Too high! Try again." << endl;
} else if (userGuess < secretNumber) {
cout << "Too low! Try again." << endl;
} else {
cout << "Congratulations! You guessed the correct number." <<
endl;
}
} while (userGuess != secretNumber);
return 0;
}
