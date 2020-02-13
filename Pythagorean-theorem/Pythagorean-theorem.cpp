// Pythagorean-theorem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//By: Emanuel Gonzalez
//Date: 02/13/2020
//
//This program finds the missing vaule of C in the Pyhtagorean Theorem, while A and B are given.

#include <iostream>
#include <math.h>

int main()
{
    std::cout << "Pythagorean Theorem!\n";
    std::cout << "Equation: A^2 + B^2 = C^2\n";
    std::cout << "Solve for C!\n";

    float Aside = 4.0;
    float Bside = 5.0;
    float Cside = 0.0;

    Cside = sqrt((Aside * Aside) + (Bside * Bside));

    std::cout << "\n" << Aside << "^2 + " << Bside << "^2 = " << Cside << "^2";
    std::cout << "\nYou found it!"; 

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
