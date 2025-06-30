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
    
    for(int i = 0; i<n;i++){
        int start = 0;
        int end = n - 1;
        while(start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }   

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;    
}