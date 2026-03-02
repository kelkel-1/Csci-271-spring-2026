/*
Name: Kelyce Hyde
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Sentinel-Controlled Class Average
Description: Calculates average grades until the user enters -1 as a sentinel value.
*/

#include <iostream>
using namespace std;

int main() {

    int total = 0;
    int counter = 0;
    int grade;

    cin >> grade;

    while (grade != -1) {
        total += grade;
        counter++;
        cin >> grade;
    }

    if (counter > 0)
        cout << static_cast<double>(total) / counter << endl;
    else
        cout << "No grades entered." << endl;

    return 0;
}

/*
Reflection:
1. I learned how sentinel-controlled loops stop based on user input.
2. I had to prevent division by zero using an if statement.
3. I reviewed casting to avoid integer division.
4. AI Usage: Used ChatGPT to verify structure and logic.
5. I learned the difference between definite and indefinite loops.
*/
