#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    int i = 1;
    do{
        cout << i << " ";
        ++i; // increment i by 1
    } while (i <= n); // condition

    return 0;
}