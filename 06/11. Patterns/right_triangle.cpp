#include <iostream>

using namespace std;

int main () {
    int i, j, n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    int k,l;
    for (k = n; k >= 1; k--){
        for (l = 1; l <= k; l++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    int m, o;
    for (m = 1; m <= n; m++){
        for (o = 1; o <= n - m; o++){
            cout << " ";
        }
        for (o = 1; o <= m; o++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    int p, q;
    for (p = 1; p <= n; p++){
        for (q = 1; q <= p - 1; q++){
            cout << " ";
        }
        for (q = 1; q <= n - p + 1; q++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    
   

        for (int k = n; k >= 1; k--){
            for (int l = 1; l <= k - 1; l++){
                cout << " ";
            }
            for (int m = 1; m <= n; m++){
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
    

   
    return 0;
}