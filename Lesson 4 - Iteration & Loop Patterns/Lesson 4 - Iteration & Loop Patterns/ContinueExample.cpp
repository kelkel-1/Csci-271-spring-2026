/*
Name: Kelyce Hyde
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Continue Statement Example
Description: This program demonstrates how the continue statement skips one iteration of a loop.
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; // skip printing when i is 5
        }

        cout << i << endl;
    }

    return 0;
}

/*
Reflection:

1. What I understood from this program:
The continue statement skips the rest of the current iteration and moves to the next loop cycle.

2. Difficulties I faced:
Understanding the difference between break and continue.

3. What I needed to search or review:
Examples of continue used inside loops.

4. AI Usage:
I used AI to review the syntax and check the logic.

5. What I learned:
Continue allows a loop to skip specific values without stopping the entire loop.
*/
