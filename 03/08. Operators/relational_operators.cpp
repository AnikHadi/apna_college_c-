#include <iostream>

using namespace std;

int main() {
    // Relational operators (<, >, <=, >=, ==, !=) are used to compare two values.
    // They return a boolean value (true or false) based on the comparison.
    int a = 10, b = 20;

    cout << "a < b: " << (a < b) << endl;   // true (1)
    cout << "a > b: " << (a > b) << endl;   // false (0)
    cout << "a <= b: " << (a <= b) << endl; // true (1)
    cout << "a >= b: " << (a >= b) << endl; // false (0)
    cout << "a == b: " << (a == b) << endl; // false (0)
    cout << "a != b: " << (a != b) << endl; // true (1)

    return 0;
}