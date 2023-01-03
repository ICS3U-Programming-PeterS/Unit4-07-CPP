// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// Created by: Peter Sobowale
// Created on: January 2, 2023
// This program prints the integers from 1000 to 2000,
// outputting five integers per line with each
// separated by a space.
#include <iostream>

int main() {
    for (int counter = 1000; counter <= 2000; counter++) {
        // Outputs integers with a space between each
        std::cout << counter << " ";

        // If the current integer is divisible by 5, go to the next line
        if (counter % 5 == 4) {
            std::cout << std::endl;
        }
    }
}
