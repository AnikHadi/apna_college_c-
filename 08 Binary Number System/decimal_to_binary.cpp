#include <iostream>

using namespace std;


void decimalToBinary(int decNum) {
    int n = decNum;
    int binNum = 0;
    int pow = 1; // 10^0 10^1 10^2 10^3 ......

    while(n> 0){
        int rem = n % 2;
        binNum = binNum + rem * pow;
        n = n/2;
        pow = pow * 10;
    }

    cout << binNum << endl;

}


int main() {

    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    decimalToBinary(n);


    return 0;
}