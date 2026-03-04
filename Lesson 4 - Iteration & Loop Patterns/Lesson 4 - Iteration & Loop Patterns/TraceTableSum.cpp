/*
Name: Kelyce Hyde
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Trace Table Sum
Description: This program demonstrates a summation loop by adding numbers from 1 to 5.
*/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        sum += i;
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}

/*
Reflection:

1. What I understood from this program:
The loop adds numbers repeatedly to a variable called sum.

2. Difficulties I faced:
Understanding how the accumulator variable keeps updating.

3. What I needed to search or review:
Examples of summation loops and trace tables.

4. AI Usage:
I used AI to review the loop structure and syntax.

5. What I learned:
A summation loop uses an accumulator variable to store running totals.
*/
