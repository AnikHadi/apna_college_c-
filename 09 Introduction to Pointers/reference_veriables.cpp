#include <iostream>

using namespace std;


// pass by reference using Reference variable
void changeA(int &a){
    a = 20;
    cout << a << endl;
}


int main() {

    int a = 10;
    int &b = a;  // Reference variable initialization
    changeA(a);

    cout << a << endl;



    return 0;
}