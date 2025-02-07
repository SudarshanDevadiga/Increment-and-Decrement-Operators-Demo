# Increment and Decrement Operators Demo

A C++ program demonstrating the use of pre-increment, post-increment, pre-decrement, and post-decrement operators.

## Description

This program illustrates how increment and decrement operators work in C++. It shows the difference between pre-increment and post-increment, as well as pre-decrement and post-decrement, using simple integer variables.

### Key Features
- Demonstrates pre-increment and post-increment
- Demonstrates pre-decrement and post-decrement
- Simple integer operations
- Console output for clarity

## Code Structure

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout << "x++ is " << x++ << endl; // Post-increment
    cout << "++x is " << ++x << endl; // Pre-increment
    int y = 10;
    cout << "y-- is " << y-- << endl; // Post-decrement
    cout << "--y is " << --y << endl; // Pre-decrement
    return 0;
}
