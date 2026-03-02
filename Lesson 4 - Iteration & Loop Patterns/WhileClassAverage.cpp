/*
Name: Kelyce Hyde
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: While Class Average
Description: Calculates the average of 10 grades using a while loop.
*/

#include <iostream>
using namespace std;

int main() {

    int total = 0;
    int counter = 1;

    while (counter <= 10) {
        int grade;
        cin >> grade;
        total += grade;
        counter++;
    }

    double average = static_cast<double>(total) / 10;
    cout << average << endl;

    return 0;
}

/*
Reflection:
1. I understood how a counter-controlled loop works.
2. I had to remember to increment the counter.
3. I reviewed static_cast to avoid integer division.
4. AI Usage: Used ChatGPT to format structure and verify syntax.
5. I learned how repetition simplifies repeated input.
*/
