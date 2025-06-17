#include <iostream>

using namespace std;

int main() {
    int n, fact = 1;

    cout << "Enter the factorial number : ";
    cin >> n;

    for (int i = 1; i <=n; i++){
        fact *=i;
    }

    cout << "Factorial is : " << fact <<endl ;

    return 0;
}