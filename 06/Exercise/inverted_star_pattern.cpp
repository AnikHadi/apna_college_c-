#include <iostream>

using namespace std;

// * * * *
// * * *
// * *
// *

int main() {
    int n;
    
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n -i +1); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}