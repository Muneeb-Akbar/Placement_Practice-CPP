// Subtract the product and sum of digits of an integer

#include <iostream>
using namespace std;
int main(){
    int n=234;
    int sum=0;
    int product=1;
    for(int i=0; i<=n;i++){
        int digit = n%10;
        cout<<digit<<endl;
        sum+=digit;
        product*=digit;
        n =n/10;
    }
    cout<<"The difference between the product and sum of digits is: "<<product-sum<<endl;
}   