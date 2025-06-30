#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int findComplement(int num) {
    int result = 0;
    int bitPos = 0;

    while (num > 0) {
        int flippedBit = !(num & 1);  

        result |= (flippedBit << bitPos);
        cout<<result<<endl;

        num >>= 1;
        bitPos++;
    }

    return result;
}

int main() {
    int num = 10;
  cout<<findComplement(num) ;

    return 0;
}