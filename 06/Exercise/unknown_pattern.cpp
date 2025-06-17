#include <iostream>

using namespace std;

//  *                 *
//  * *             * *
//  * * *         * * *
//  * * * *     * * * *
//  * * * * * * * * * *
//  * * * *     * * * *
//  * * *         * * *
//  * *             * *
//  *                 *


int main() {
    int n;
    
    cout << "Enter the number odd number bigger than 4: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // for(int j = 1; j <= i; j++) {
        //     if(i >= j & )
        //     cout << "* ";
        // }
        // }
        for (int j = 1; j <= (n * 2); j++) {
            for(int k = 1; k <= j; k++) {
                if(i >= j ){
                    cout << "* ";
                }
            }

            // if( j <=n){
            //     cout << "* ";
            // }
        }
        
        cout << endl;
    }

    
    // for (int i = 1; i <= (n-1); i++) {
    //     cout << " ";
    //     for(int j = 1; j <= i-1; j++) {
    //         cout << " ";
    //     }
    //     for(int j = 1; j <= (n-i); j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    return 0;
}