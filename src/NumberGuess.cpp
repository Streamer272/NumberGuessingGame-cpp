#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include "NumberGuess.h"


NumberGuess::NumberGuess() {
    srand(time(nullptr));
    number = 0 + rand() % ((10 + 1) - 0);
}

void NumberGuess::main() {
    std::cout << "Welcome to number guessing game!" << std::endl;

    while (true) {
        system("clear");
        std::cout << "You can guess only " << guesses << " more times..." << std::endl;
        if (!old_message.empty()) {
            std::cout << old_message << std::endl;
            old_message = "";
        }
        std::cout << "Guess number: ";

        std::string s_guess;
        std::cin >> s_guess;
        int guess = std::stoi(s_guess);

        if (guess == number) {
            std::cout << "Congrats, you won!" << std::endl;
            break;
        }
        else {
            if (guess < number) {
                old_message = "Try higher!";
            }
            else {
                old_message = "Try lower!";
            }

            std::cout << "Try again!" << std::endl;
            guesses--;
        }
    }
}
