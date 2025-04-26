#include <iostream>

using namespace std;    

// Conditional statements in C++

// * if, else,
// * else if
// * ternary operator
// * switch


int main () {

    int a = 10, b = 20;
    // if statement
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "b is greater than a" << endl;
    }

    // else if statement
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else if (a == b) {
        cout << "a is equal to b" << endl;
    } else {
        cout << "b is greater than a" << endl;
    }

    // ternary operator
    (a > b ? cout << "a is greater than b" << endl : cout << "b is greater than a" << endl);

    // switch statement

    int choice = 2;
    switch (choice) {
        case 1:
            cout << "Choice is 1" << endl;
            break;
        case 2:
            cout << "Choice is 2" << endl;
            break;
        case 3:
            cout << "Choice is 3" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    

    return 0;
}