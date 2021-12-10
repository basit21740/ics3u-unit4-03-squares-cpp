// Copyright (c) 2021 Abdul Basit All rights reserved.
//
// Created by: Abdul Basit
// Created on: Nov 2021
// this program tells about the squares

#include <math.h>
#include <iostream>


// This function tells about the squares

int main() {
    int loop_counter;
    int adding_number = 0;
    std::string chosen_number_as_string;
    int chosen_number;
    int answer = 0;

    std::cout << "Enter an integer >= 0: ";
    std::cin >> chosen_number_as_string;

    try {
        chosen_number = std::stoi(chosen_number_as_string);
        for (loop_counter= 0; loop_counter <= chosen_number; loop_counter++) {
            answer = pow(loop_counter, 2);
            std::cout << loop_counter << "²= " << answer << std::endl;
        }
    } catch(std::invalid_argument) {
        std::cout << "You did not enter an integer" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
