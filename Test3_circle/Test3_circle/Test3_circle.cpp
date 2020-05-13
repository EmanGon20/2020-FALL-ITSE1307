// Test3_circle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

float fltR = 3.50;

float diameter(float fltR) {
    return 2 * fltR;
}

float circumference(float fltR) {
    return 2 * fltR * 3.14;
}

float area(float fltR) {
    return 3.14 * (fltR * fltR);
}

int main()
{
    cout << "\nCircle Calculations: ";
    cout << "\nDiameter: " << diameter;
    cout << "\nCircumference: " << circumference;
    cout << "\nArea: " << area;
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
