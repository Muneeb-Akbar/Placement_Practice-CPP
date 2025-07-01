#include<iostream>

using namespace std;


void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        // Swap elements at index i and i+1
        if (i + 1 < size) {
            int temp = arr[i];
            arr[i]= arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}


int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    swapAlternate(arr, 8);
    cout << "Array after swapping alternate elements: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }

}