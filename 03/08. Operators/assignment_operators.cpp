#include <iostream>

using namespace std;

int main () {
    // Assignment Operators (=, +=, -=, *=, /=, %=)

    int a = 10; // Assignment operator
    cout << "Value of a: " << a << endl; // Output the value of a
    int b = 5; // Assignment operator
    cout << "Value of b: " << b << endl; // Output the value of b
    int d = 0; // Assignment operator
    cout << "Value of d: " << d << endl; // Output the value of d
    int c = a + 5; // Assignment operator with expression
    cout << "Value of c: " << c << endl; // Output the value of c
    d += 5;  // Compound assignment operator (d = d + 5)
    cout << "Value of d: " << d << endl; // Output the value of d
    c -= 5;  // Compound assignment operator (c = c - 5)
    cout << "Value of c: " << c << endl; // Output the value of c
    c *= 5;  // Compound assignment operator (c = c * 5)
    cout << "Value of c: " << c << endl; // Output the value of c
    c /= 5;  // Compound assignment operator (c = c / 5)
    cout << "Value of c: " << c << endl; // Output the value of c
    c %= 5;  // Compound assignment operator (c = c % 5)
    cout << "Value of c: " << c << endl; // Output the value of c
    c &= 5;  // Compound assignment operator (c = c & 5)
    cout << "Value of c: " << c << endl; // Output the value of c
    c |= 5;  // Compound assignment operator (c = c | 5)
    cout << "Value of c: " << c << endl; // Output the value of c

    return 0;
}