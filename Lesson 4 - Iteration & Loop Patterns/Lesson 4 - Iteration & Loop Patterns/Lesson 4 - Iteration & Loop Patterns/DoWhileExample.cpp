/*
Name: Kelyce Hyde
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: DoWhileExample
Description: This program demonstrates how a do-while loop works by printing numbers from 1 to 5.
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    do
    {
        cout << i << endl;
        i++;
    }
    while (i <= 5);

    return 0;
}

/*
Reflection:

1. What I understood from this program:
A do-while loop executes the code block first and then checks the condition after.

2. Difficulties I faced:
Understanding the difference between while and do-while loops.

3. What I needed to search or review:
Examples of do-while loops and how the condition is checked at the end.

4. AI Usage:
I used AI to help review the syntax of the do-while loop.

5. What I learned:
I learned that a do-while loop guarantees the loop runs at least once before checking the condition.
*/
