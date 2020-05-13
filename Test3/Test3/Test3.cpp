// Test3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Name: Emanuel Gonzalez
//Date 5/12/2020

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word = " ";


    do {
        cout << "Please enter a word between 4 to 8 characters long: ";
        cin >> word;

    } while (word.length() >= 4 <= 8);

    
    
    
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
