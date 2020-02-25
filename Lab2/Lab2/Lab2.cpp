// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//By: Emanuel Gonzalez
//Date: 02/13/2020
//
//This is a program that ask the user if they want to convert miles to kilometer or vice versa. 
//The program then continues to calculate if the user input either a m or k. If the user chooses either k or m,
//then the program proceeds to ask the user to input a number between 1-100. If the user inputs anyother letter, it will be considered an
//invaild choice.

#include <iostream>
#include <cctype>

int main()
{

    float KMConvo = 1.60934f;
    float MConvo = 1.60934f;
    float MResult = 0.0f;
    float KMResult = 0.0f;
    char chrChoice = ' ';
    std::cout << "miles to kilometers or kilometers to miles";
    std::cout << "\nFrom (m) to km or (k) to m (k or m)?: ";
    std::cin >> chrChoice;
    chrChoice = tolower(chrChoice);

    if (chrChoice == 'k') {
        std::cout << "\nPlease enter a number between 1-100: ";
        std::cin >> KMResult;
        KMResult = KMResult / MConvo;
        std::cout << "\n";
        std::cout << "\nYour conversion from kilometer to miles is: " << KMResult;
        std::cout << "\n";
    }
    else if (chrChoice == 'm') {
        std::cout << "\nPlease enter another number between 1-100: ";
        std::cin >> MResult;
        MResult = MResult * KMConvo;
        std::cout << "\nYour conversion from miles to kilometer is: " << MResult;
        std::cout << "\n";
    }
    else {
        std::cout << "\nYou enter an invaild choice. OOF.";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
