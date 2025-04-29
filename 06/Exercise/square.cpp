#include <iostream>

using namespace std;

int main () {
    int n, i;

    cout << "Enter your Square rows: ";
    cin >> n;

    for ( i = 1; i <= n; i++){
        
        for (int j = 1; j <= n; j++) {
            cout << " " << i ;
        }
        cout << endl;
    }

    
    


    return 0;
}