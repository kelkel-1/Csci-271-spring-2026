/*
Name: Kelyce Hyde
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Count Down from 10 to 1
Description: Uses a for loop to count backward from 10 to 1.
*/

#include <iostream>
using namespace std;

int main() {

    for (int i = 10; i >= 1; i--) {
        cout << i << endl;
    }

    return 0;
}

/*
Reflection:
1. I understood how to reverse a loop by changing initialization, condition, and decrement.
2. I had to be careful with using >= instead of > to include 1.
3. I reviewed loop boundaries from the slides.
4. AI Usage: Used ChatGPT to verify loop structure.
5. I learned how reverse iteration works.
*/
