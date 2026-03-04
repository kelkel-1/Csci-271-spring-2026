/*
Name: Kelyce Hyde
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Break Statement Example
Description: This program demonstrates how the break statement immediately stops a loop.
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; // stop the loop when i is 5
        }

        cout << i << endl;
    }

    return 0;
}

/*
Reflection:

1. What I understood from this program:
The break statement forces a loop to stop immediately when a condition is met.

2. Difficulties I faced:
Understanding that break exits the entire loop, not just the if statement.

3. What I needed to search or review:
Examples of how break is used inside loops.

4. AI Usage:
I used AI to review the syntax and confirm the logic.

5. What I learned:
Break allows programmers to exit loops early when a condition occurs.
*/
