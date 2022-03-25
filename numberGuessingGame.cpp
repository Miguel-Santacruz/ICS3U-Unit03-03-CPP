// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: March 2022
// This program is a number guessing game

#include <iostream>
#include <random>

int main() {
    // This function is a number guessing game

    int number;
    int RandomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]
    RandomNumber = idist(rgen);

    // Input
    std::cout << "Enter number between 0 - 9: ";
    std::cin >> number;
    std::cout << "" << std::endl;

    // process & output
    if (number == RandomNumber) {
        std::cout << "You guessed right!";
    } else {
        std::cout << "you guessed wrong! The right number was " << RandomNumber;
    }

    std::cout << "\nDone." << std::endl;
}
