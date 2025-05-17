#include <iostream>
using namespace std;


int countSetBits(unsigned int n) {
    int count = 0 ;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    return count;
}
void printBinary(unsigned int n) {
    for (int i = 31; i >= 0; --i) {
        cout << ((n >> i) & 1);
        if (i % 8 == 0) cout << " "; // optional spacing for readability
    }
    cout << endl;
}


int main() {
    int number =11 ;
    printBinary(number);
    cout<<"Number of set bits: " << countSetBits(number) << endl;
    return 0;
}
