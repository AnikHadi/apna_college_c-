#include <iostream>

using namespace std;

//       *   *
//     * *   * *
//   * * *   * * *
// * * * *   * * * *

// ! 1
// ! 12
// ! 123
// ! 1234

int main() {
    int n;
    
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}