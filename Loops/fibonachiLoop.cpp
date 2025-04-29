#include <stdio.h>
#include <iostream>
using namespace std;
using namespace std;   
int main() {
    int n = 10; // Number of terms
    int a = 0, b = 1, c;

    cout << "Fibonacci Series: " << a << ", " << b;

    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << ", " << c;
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}