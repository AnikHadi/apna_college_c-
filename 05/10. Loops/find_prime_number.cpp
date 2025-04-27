#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n, i, flag = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

//    for (i = 2; i <= n/2; i++) {
//     if(n % i == 0) {
//         flag = 1; // n is not prime
//         break;
//     }
//    }

    // Optimized version
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 1; // n is not prime
            break;
        }
    }

    if (flag == 0) {
          cout << n << " is a prime number." << endl;
     } else {
          cout << n << " is not a prime number." << endl;
     }

    return 0;
}
