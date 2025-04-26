#include <iostream>

using namespace std;

int main () {
    // Logical operators (&&, ||, !) are used to perform logical operations on boolean values.

    // Binary logical operators (&& and ||) take two boolean operands and return a boolean result.
    
    // Unary logical operator (!) takes one boolean operand and returns the negation of that operand.
    
    // They return a boolean value (true or false) based on the operation.

    bool a = true, b = false;

    cout << "a && b: " << (a && b) << endl; // false (0)
    cout << "a || b: " << (a || b) << endl; // true (1)
    cout << "!a: " << (!a) << endl;         // false (0)
    cout << "!b: " << (!b) << endl;         // true (1)
    cout << "a && !b: " << (a && !b) << endl; // true (1)
    cout << "a || !b: " << (a || !b) << endl; // true (1)
    cout << "a && b || !b: " << (a && b || !b) << endl; // true (1) 

    return 0;
}