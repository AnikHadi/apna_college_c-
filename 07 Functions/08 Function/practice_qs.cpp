#include <iostream>
using namespace std;


void isEven(int num) {
    if(num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
}

int main() {

    int num;
    cout << "Enter the number even or odd: ";
    cin >> num;

    isEven(num);  // Call the function with the input number

    return 0;
}