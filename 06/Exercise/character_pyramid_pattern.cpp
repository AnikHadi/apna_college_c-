#include <iostream>

using namespace std;

// * A
// * BC
// * DEF
// * GHIJ

int main() {
    int n;
    char chr = 'A';
    
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // cout << chr;
            // chr++;     or
            cout << chr++;
        }
        cout << endl;
    }

    return 0;
}