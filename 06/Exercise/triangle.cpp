#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Enter Your number : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n-i); j++){
            cout << " ";
        }

        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << endl;
    cout << endl;
    cout << endl;

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

    return 0;
}