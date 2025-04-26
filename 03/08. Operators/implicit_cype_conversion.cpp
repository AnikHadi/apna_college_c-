#include <iostream>

using namespace std;

//  bool -> char -> int -> float -> double

int main() {

    cout << (10/ 3) << endl; // Implicit conversion from int to int result is int
    cout << (10 / 3.0) << endl; // Implicit conversion from int to double result is double

    cout << ('A' + 1) << endl; // Implicit conversion from char to int result is int

    return 0;
}