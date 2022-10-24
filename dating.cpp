// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Date: October 23rd, 2022
// This program asks the user if they are
// good looking and if they are rich.
// If they are either good looking or rich,
// then the program will tell the user that
// they are eligible to date my grandchild.
// The program will also tell the user if
// their response is invalid, which is anything
// other than "1"(for yes) or "0"(for no).
#include <iostream>
#include <string>

// this function checks to see if the user
// is either rich or good looking, and displays
// the results back to the user.This function also
// checks to make sure the user input is valid.
int main() {
    // introducing the user to the program
    // and describing what the program will do.
    std::cout << "I am the grandparent of this lovely being. Oh? ";
    std::cout << "What’s that? You want to date my grandchild?? Well, ";
    std::cout << "I have two (2) questions for you. Answer carefully; ";
    std::cout << "these questions shall determine thine fate. ";
    std::cout << "Answer these two questions using 1 ";
    std::cout << "for 'yes' and 0 for 'no'. ";

    // initializing the variables to hold the
    // user's answer on if they are rich and
    // good looking.
    std::string userRichAsString;
    std::string userGoodLookingAsString;
    int userRichAsInt, userGoodLookingAsInt;

    // getting user input on whether they are good
    // looking and rich.
    std::cout << "First: are you rich? (1 for yes or 0 for no) ";
    std::cin >> userRichAsString;
    std::cout << "Second: are you extraordinarily good looking? ";
    std::cout << "(1 or yes or 0 for no) ";
    std::cin >> userGoodLookingAsString;

    // try-catch statement to see if the user's input
    // on if they are good looking or rich is
    // a valid response.
    try {
        // try converting the user's answers to int.
        userRichAsInt = std::stoi(userRichAsString);
        userGoodLookingAsInt = std::stoi(userGoodLookingAsString);

        // checking if the user's responses are either one or zero
        // (i.e checking if they are valid numbers).
        if (userRichAsInt == 1 || userRichAsInt == 0) {
            if (userGoodLookingAsInt == 1 || userGoodLookingAsInt == 0) {
                if (userRichAsInt || userGoodLookingAsInt == 1) {
                    std::cout << "Congratulations! The council (which ";
                    std::cout << "consists only of myself and many, many ";
                    std::cout << "mirrors) has determined that you are ";
                    std::cout << "eligible to date my grandchild! You ";
                    std::cout << "better not make me regret this decision. :-)";
                } else {
                    std::cout << "Sorry! The council (which consists only ";
                    std::cout << "of myself and many, many mirrors) has ";
                    std::cout << "determined that you are NOT eligible ";
                    std::cout << "to date my grandchild !";
                    std::cout << "Please leave now :-)";
                }
            } else {
                std::cout << "This response was not valid. Respond only ";
                std::cout << "with '1' for 'yes' and '0' for 'no', please.";
            }
        } else {
            std::cout << "This response was not valid. Respond only ";
            std::cout << "with '1' for 'yes' and '0' for 'no', please.";
        }
    } catch (std::invalid_argument) {
        std::cout << "This response was not valid. Respond only ";
        std::cout << "with '1' for 'yes' and '0' for 'no', please.";
    }
    // this line of code takes the place of the "finally"
    // used in python code. it prints no matter
    // the outcome of the try..catch statement
    // or the if...else statements inside.
    std::cout << "\n Thank you for using this program!" << std::endl;
}
