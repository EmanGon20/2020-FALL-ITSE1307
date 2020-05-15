// DollarandSense.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double moneyInput = 0.00;

    cout << "Hello, please input your amount of money: \n";
    cin >> moneyInput;

    //hundreds
    moneyInput = moneyInput / 100;
    cout << "Here your how much in 100 dollar bills: " << moneyInput;

    //Fifties
    moneyInput = (moneyInput /50) % 100;
    cout << "Here your how much in 50 dollar bills: " << moneyInput;

    //Twenties
    moneyInput = (moneyInput / 20) % 50;
    cout << "Here your how much in 20 dollar bills: " << moneyInput;

    //Tens
    moneyInput = (moneyInput / 10) % 20;
    cout << "Here your how much in 10 dollar bills: " << moneyInput;

    //Fives
    moneyInput = (moneyInput / 5) % 10;
    cout << "Here your how much in 5 dollar bills: " << moneyInput;

    //Ones
    moneyInput = (moneyInput / 1) % 5;
    cout << "Here your how much in 1 dollar bills: " << moneyInput;

    //Quaters
    moneyInput = (moneyInput - 100) / 25;
    cout << "Here your how much in Quaters: " << moneyInput;

    //Dimes
    moneyInput = (moneyInput - 100) % 25;
    cout << "Here your how much in Dimes: " << moneyInput;

    //Nickles
    moneyInput = (moneyInput - 100) % 10;
    cout << "Here your how much in Nickles: " << moneyInput;

    //Pennies
    moneyInput = (moneyInput - 100) % 5;
    cout << "Here your how much in Pennies: " << moneyInput;
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
