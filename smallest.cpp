// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: oct 2021
// this program rounds a float to the users inputted number

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int smallest_finder(std::array<int, N> number_list) {
    // this function finds the smallst number in a list
    int loop_item;

    int smallest = number_list[9];

    for (int loop_item : number_list) {
        if (loop_item < smallest) {
            smallest = loop_item;
        }
    }
    return smallest;
}

int main() {
    // This function generates 10
    // random numbers snd puts them in s list

    int smallest;
    std::array<int, 10> number_list;
    int loop_counter;
    int random_number;
    int smallest_number;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 100);  // [1,10]

    // input
    for (loop_counter = 0; loop_counter <= 10; loop_counter++) {
        random_number = idist(rgen);
        number_list[loop_counter] = (random_number);
        std::cout << "The random number is: " << random_number << std::endl;
    }
    smallest_number = smallest_finder(number_list);
    std::cout << "\n\nThe smallest number is " << smallest_number << std::endl;
    std::cout << "\nDone." << std::endl;
}
