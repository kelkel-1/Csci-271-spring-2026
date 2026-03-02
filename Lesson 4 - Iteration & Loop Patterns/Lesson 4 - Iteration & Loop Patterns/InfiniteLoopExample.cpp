/*
Name: Kelyce Hyde
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Infinite Loop Example
Description: Demonstrates how an infinite loop can occur if the condition never changes.
*/

#include <iostream>
using namespace std;

int main() {

    int counter = 1;

    while (counter > 0) {
        cout << "This is an infinite loop demo." << endl;
    }

    return 0;
}

/*
Reflection:
1. I understood how an infinite loop happens when the condition never becomes false.
2. The challenge is remembering to update variables inside loops.
3. I reviewed loop conditions and termination logic.
4. AI Usage: Used ChatGPT to verify syntax and structure.
5. I learned that infinite loops can crash or freeze a program.
*/
