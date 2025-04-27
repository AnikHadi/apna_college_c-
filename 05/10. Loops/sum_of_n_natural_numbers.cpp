#include  <iostream>

using namespace std;

int main() {

    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i; // sum = sum + i
    }

    cout << "Sum = " << sum << endl; 

    int m, sum2 = 0;

    cout << "Enter a positive integer: ";
    cin >> m;

    int j = 1;
    while (j <= m) {
        sum2 += j; // sum = sum + i
        ++j; // increment i by 1
    }
    cout << "Sum2 = " << sum2 << endl;

    return 0;
}