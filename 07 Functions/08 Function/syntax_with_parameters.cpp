#include <iostream>
using namespace std;
void printName(string name) {
    cout << "Hello " << name << endl;
}

void sum() {
    cout << "Calculating the sum of two numbers." << endl;
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Call the sum function
    int result = num1 + num2; 
    cout << "The sum is: " << result << endl;
}

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;  // Input from the user
    printName(name);  // Call the function with the input name

     sum();
    return 0;
}