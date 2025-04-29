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
        // for (int j = 1; j <= i; j++) {
        //     if( ){
        //         cout << "*";
        //     } else {
        //         cout << " ";
        //     }
        // }
        // for (int j = 1; j <= i; j++) {
        //     if( ){
        //         cout << "*";
        //     } else {
        //         cout << " ";
        //     }
        // }

        for(int j = 1; j <= n; j++) {
            if(n - j >= i) {
                cout << "  ";
            } else {
                cout << "* ";
            }

            if((i ) == 0 ) {
                cout << "  ";
            } else if() {
                cout << "* ";
            }
            
        }
        cout << endl;
    }

    return 0;
}