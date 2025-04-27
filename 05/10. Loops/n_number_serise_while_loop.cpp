#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;

    while(i<=n){
        if(i == n){
            cout << i  << " ........ + " << "n" << endl;
        } else {
            cout << i << " " << "+" << " ";
        }
        i++;
    }

    cout << endl; // Print a newline after the loop

    return 0;
}