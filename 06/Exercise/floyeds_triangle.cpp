#include <iostream>

using namespace std;

// *   1
// *   2  3
// *   4  5  6 
// *   7  8  9  10
// *   11 12 13 14 15


int main() {
    int n;
    int num = 1;
    
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }

    return 0;
}