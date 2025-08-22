#include<iostream>
#include<cstdlib>
#include<ctime>

class NumberGuessingGame {
private:
    int targetNumber;
    int maxAttempts;
    int currentAttempt;

public:
    NumberGuessingGame(int max) : maxAttempts(max), currentAttempt(0) {
        // Seed for random number generation
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        // Generate a random number between 1 and 100
        targetNumber = std::rand() % 100 + 1;
    }

    void play() {
        std::cout << "Welcome to the Number Guessing Game!\n";
        std::cout << "Try to guess the number between 1 and 100.\n";

        while (currentAttempt < maxAttempts) {
            int guess;
            std::cout << "Attempt " << currentAttempt + 1 << "/" << maxAttempts << ": Enter your guess: ";
            std::cin >> guess;

            if (guess == targetNumber) {
                std::cout << "Congratulations! You guessed the correct number.\n";
                return;
            } else {
                std::cout << "Incorrect! Try again.\n";
                if (guess < targetNumber) {
                    std::cout << "Hint: The target number is greater.\n";
                } else {
                    std::cout << "Hint: The target number is smaller.\n";
                }
            }

            currentAttempt++;
        }

        std::cout << "Sorry, you've run out of attempts. The correct number was: " << targetNumber << "\n";
    }
};

int main() {
    // Create a game with a maximum of 5 attempts
    NumberGuessingGame game(5);

    // Start the game
    game.play();

    return 0;
}
