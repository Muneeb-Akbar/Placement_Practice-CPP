/* reversed interger
    -Normal Case: 
        -Input: 123
        -Output: 321
    -Overflow Case:
        -Input: 1534236469
        -Output: 0
*/
#include <iostream>
#include <limits.h>
using namespace std;


int reverse(int x) {
    int ans = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        // Check for overflow
        if ((ans > INT_MAX/10 )||(ans < INT_MIN/10)) {
            return 0; // Overflow occurred
        }
        ans = ans * 10 + digit;
    }
    return ans;
}

int main() {
    int x = 123;
    cout << "Reversed integer: " << reverse(x) << endl;

    x = 1534236469;
    cout << "Reversed integer: " << reverse(x) << endl;

    return 0;
}

