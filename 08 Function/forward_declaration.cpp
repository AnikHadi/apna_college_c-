#include <iostream>
using namespace std;

// Forward declaration of the function
void greet(string name);    

int main() {
    greet("John");
    return 0;
}

void greet(string name) {
    cout << "Hello " << name << ", welcome to the program!" << endl;
}
