// Copyright (c) 2021 Nika Zamani All rights reserved
//
// Created by Nika Zamani
// Created on April 2021
// This program adds two numbers together
//    with numbers inputted from the user

#include <iostream>

int main() {
    // this function adds two numbers
    int first_number, second_number, sum;

    // input
    std::cout << "Enter the first number to add (integer): ";
    std::cin >> first_number;

    std::cout << "Enter the second number to add (integer): ";
    std::cin >> second_number;

    // process
    sum = first_number + second_number;

    // output
    std::cout << "" << std::endl;
    std::cout << "Sum of Two Numbers : " << first_number << " + " <<
    second_number << " = " << sum;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
