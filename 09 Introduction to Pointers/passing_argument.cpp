#include <iostream>

using namespace std;

void changeA(int *param) {
    *param = 20;
    cout << "Value of *param: " << *param << endl;
}


int main() {
    int a = 10;
    
    changeA(&a);

    cout << "Value of a: " << a << endl;


    return 0;
}