#include<iostream>

using namespace std;

int main(){
    int arr[100];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
 
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int unique = 0;
    for(int i = 0; i < n; i++) {
        unique ^= arr[i]; // XOR operation to find unique element
    }

    cout << "The unique element in the array is: " << unique << endl;

    return 0;
}