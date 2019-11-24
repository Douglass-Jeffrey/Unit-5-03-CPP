// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Nov 2019
// This program calculates the users percentage based on mark from 0- to 4+

#include <iostream>
#include <string>

int Calculate(char mark[]) {
    // This function calculates users percentage based on mark from 0- to 4+

    // variables
    int percentage;

    // Process
    // Determine if inputted number fits with any viable marks (0- to 4+)
    switch (mark[0]) {
        case '4' :
            if (mark[1] == '+') {
                percentage = 97.5;
            } else if (mark[1] == '-') {
                percentage = 83;
            } else {
                percentage = 90.5;
            }
            break;
        case '3' :
            if (mark[1] == '+') {
                percentage = 78;
            } else if (mark[1] == '-') {
                percentage = 71;
            } else {
                percentage = 74.5;
            }
            break;
        case '2' :
            if (mark[1] == '+') {
                percentage = 68;
            } else if (mark[1] == '-') {
                percentage = 61;
            } else {
                percentage = 64.5;
            }
            break;
        case '1' :
            if (mark[1] == '+') {
                percentage = 58;
            } else if (mark[1] == '-') {
                percentage = 51;
            } else {
                percentage = 54.5;
            }
            break;
        case '0' :
            if (mark[1] == '+') {
                percentage = 44.5;
            } else if (mark[1] == '-') {
                percentage = 14.5;
            } else {
                percentage = 34.5;
            }
            break;
        // if inputted value doesn't fit into one of these cases set it to one
        default :
            percentage = -1;
    }
    return percentage;
}

int main() {
    // This This function accepts inputted marks from 0- to 4+

    // Variables
    char userMark[10];
    int userPercent;

    // Input
    std::cout << "Input a mark from 0- to 4+: " << std::endl;
    std::cin >> userMark;

    // Process
    userPercent = Calculate(userMark);

    // Output
    if (userPercent == -1) {
        std::cout << "Please enter only valid marks from 0- to 4+" << std::endl;
    } else {
        std::cout << "The inputted mark is equivalent to " << userPercent
                  << "%" << std::endl;
    }
}
