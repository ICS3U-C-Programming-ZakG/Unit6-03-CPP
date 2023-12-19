// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Dec. 19, 2023
// This program generates 10 random numbers
// then finds the min and uses a for...Each loop.

#include <array>
#include <cstdlib>
#include <iostream>

int findMinValue(std::array<int, 10> list) {
    // declare variable
    int smallestNum = 100;

    // look for largest number
    for (int value : list) {
        if (value < smallestNum) {
            smallestNum = value;
        }
    }

    // return max
    return smallestNum;
}

int main() {
    // introduce program to user
    std::cout << "Hello, this program generates 10 random ";
    std::cout << "numbers then finds the min." << std::endl;

    // declare constants and variables
    const int SIZE = 10;
    const int MIN_VALUE = 0;
    const int MAX_NUM = 100;
    std::array<int, SIZE> numList;
    int randomNumber, min;

    // Providing a seed value
    srand((unsigned)time(NULL));

    // populate array
    for (int counter = 0; counter < SIZE; counter++) {
        // Generate random number
        randomNumber = rand() % MAX_NUM;

        // assign random number to cells in array
        numList[counter] = randomNumber;
    }

    // call function
    min = findMinValue(numList);

    // display all generated numbers
    for (int counterTwo = 0; counterTwo < SIZE; counterTwo++) {
        std::cout << "Added: " << numList[counterTwo] << std::endl;
    }

    // display max
    std::cout << "The min is " << min << std::endl;
}
