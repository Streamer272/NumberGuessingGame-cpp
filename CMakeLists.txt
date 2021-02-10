cmake_minimum_required(VERSION 3.17)
project(number_guessing_game)

set(CMAKE_CXX_STANDARD 14)

add_executable(number_guessing_game src/main.cpp src/NumberGuess.cpp src/NumberGuess.h)