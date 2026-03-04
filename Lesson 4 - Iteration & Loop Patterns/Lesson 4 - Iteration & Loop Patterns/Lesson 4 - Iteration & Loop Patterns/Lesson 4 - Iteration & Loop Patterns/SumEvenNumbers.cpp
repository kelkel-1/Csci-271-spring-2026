/*
Name: Kelyce Hyde
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Sum Even Numbers
Description: Calculates the sum of even numbers from 2 to 20 using a for loop.
*/

#include <iostream>
using namespace std;

int main() {

    int sum = 0;

    for (int i = 2; i <= 20; i += 2) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}

/*
Reflection:
1. I understood how i += 2 allows skipping directly to even numbers.
2. I had to remember that this is more efficient than checking with % 2.
3. I reviewed accumulator pattern.
4. AI Usage: Used ChatGPT to verify structure.
5. I learned the difference between counter and accumulator.
*/
