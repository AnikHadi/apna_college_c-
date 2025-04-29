#include <iostream>

using namespace std;

// *       *
// *         *
// * * * * * * *
// *         *
// *       *

int main() {
    int n;
    
    cout << "Enter the number bigger than 5: ";
    cin >> n;

    if( n > 5 ){
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= n; j++) {
                if( (i == 1 || i == 5) & (n - 2 == j)  ) {
                    cout << "* ";
                } else if((i == 2 || i == 4) & n - 1 == j ) {
                    cout << "* ";
                } else if(i == 3) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    } else {
        cout << "Please Provide the number bigger than 5! " << endl;
    }

    return 0;
}