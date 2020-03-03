// Right_triangle_checker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//By: Emanuel Gonzalez
//Date: 03/02/2020
//
//This program lets the user input a number for three sides of a trinagle and tells the user if it is a right triangle or not.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float Aside = 0.0;
    float Bside = 0.0;
    float Cside = 0.0;

    cout << "Right triangle checker\n";
    cout << "\nEnter a number for side A: ";
    cin >> Aside;
    cout << "\nEnter a number for side B: ";
    cin >> Bside;
    cout << "\nEnter a number for side C: ";
    cin >> Cside;

    if ((Cside * Cside) ==  (Aside * Aside) + (Bside * Bside)) {
        cout << "This is a right triangle.";
    }
    else {
        cout << "This is not a right triangle.";
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
