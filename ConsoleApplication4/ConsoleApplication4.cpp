// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    

        int num1, num2;
    char symbol;

    // input statements
    cout << "Please enter the first number: ";
    cin >> num1;
    cout << endl;
    cout << "Please enter the operator symbol: ";
    cin >> symbol;
    cout << endl;
    cout << "Please enter the second number: ";
    cin >> num2;
    cout << endl;

    // printing the result
    if (symbol == '+')
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    else if (symbol == '-')
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    else if (symbol == '*')
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    else if (symbol == '/')
    {
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Dividing a number by zero is forbidden." << endl;
    }
    else
        cout << "You have entered a wrong operator symbol." << endl;

    return 0;

}
