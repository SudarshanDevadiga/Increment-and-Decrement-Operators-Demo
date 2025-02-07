#include <iostream> // Ensure correct header is included
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