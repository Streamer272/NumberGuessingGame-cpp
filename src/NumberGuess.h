#pragma once

class NumberGuess {
private:
    int number;
    int guesses = 10;
    std::string old_message = "";
public:
    NumberGuess();
    void main();
};
