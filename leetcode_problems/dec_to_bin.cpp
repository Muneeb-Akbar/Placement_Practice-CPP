#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 50000;
    // cin >> n;

    string ans = "";
    
    if (n == 0) {
        ans = "0";
    } else {
        while (n != 0) {
            int bit = n & 1;
            ans = to_string(bit) + ans; // prepend bit
            n = n >> 1;
        }
    }

    cout << "Answer is " << ans << endl;
    return 0;
}
