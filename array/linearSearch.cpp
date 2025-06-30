#include<iostream>
using namespace std;


bool search(int arr[], int n, int num) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            return true; // Number found
        }
    }
    return false; // Number not found
}

int main(){
    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Linear search for the number 5
    int num = 0;
    search(arr, 10, num) ? cout << "Number found" : cout << "Number not found";
    cout << endl;
}