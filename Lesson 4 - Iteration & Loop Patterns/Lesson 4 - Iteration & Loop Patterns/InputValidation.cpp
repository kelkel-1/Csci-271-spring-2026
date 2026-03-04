/*
Name: Kelyce Hyde
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Input Validation Loop
Description: This program forces the user to enter a positive number before continuing.
*/

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    while (number <= 0)
    {
        cout << "Invalid input. Enter a positive number: ";
        cin >> number;
    }

    cout << "You entered a valid number: " << number << endl;

    return 0;
}

/*
Reflection:

1. What I understood from this program:
Input validation ensures the user enters acceptable data before the program proceeds.

2. Difficulties I faced:
Understanding how the loop keeps running until valid input is entered.

3. What I needed to search or review:
Examples of while loops used for input validation.

4. AI Usage:
I used AI to review the syntax and logic.

5. What I learned:
Input validation loops help prevent bad or unexpected data from entering a program.
*/
