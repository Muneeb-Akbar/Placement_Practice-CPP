#include <iostream>
using namespace std;

// Function to find the maximum element in an array
int getmax(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    //returning the maximum value
    return max;
}

// Function to find the minimum element in an array
int getmin(int arr[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    // returning the minimum value
    return min;
}

int main(){
    int size;  
    cout << "Enter the size of the array: ";
    cin >> size;
    int num[100];

    // taking input in array 
    for(int i = 0; i < size; i++) {
        cin >> num[i];

    }
    int max = getmax(num, size);
    int min = getmin(num, size);
    cout << "Maximum value in the array is: " << max << endl;
    cout << "Minimum value in the array is: " << min << endl;



}