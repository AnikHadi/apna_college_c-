#include <iostream> 

using namespace std;

void binaryToDecimal(int binNum) {
    int n = binNum;
    int decNum = 0;
    int pow = 1; // 2^0 2^1 2^2 2^3 ......
    while (n > 0) {
        int lastDigit = n % 10;
        decNum = decNum + pow * lastDigit;
        pow = pow * 2; 
        n = n / 10;
    }
    cout << decNum << endl;
}

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    binaryToDecimal(n);
    return 0;
}