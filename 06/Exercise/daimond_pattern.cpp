#include <iostream>

using namespace std;

//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * *
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 


int main() {
    int n;
    
    cout << "Enter the number odd number bigger than 8: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(n - j >= i) {
                cout << " ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }

    
    for (int i = 1; i <= (n-1); i++) {
        cout << " ";
        for(int j = 1; j <= i-1; j++) {
            cout << " ";
        }
        for(int j = 1; j <= (n-i); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}