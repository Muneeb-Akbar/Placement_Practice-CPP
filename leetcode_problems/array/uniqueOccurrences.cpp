#include<iostream>

using namespace std;


int main(){
    // multiple unique occurrences
    int arr[100];
    int n; 
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count[1000] = {0}; // Assuming the range of elements is known and limited
    for(int i = 0; i < n; i++) {
        count[arr[i]]++; // Count occurrences of each element
    }
    bool uniqueOccurrences = true;
    for(int i = 0; i < 1000; i++) {
        if(count[i] > 1) {
            uniqueOccurrences = false; // If any count is greater than 1, not unique
            break;
        }
    }
    if(uniqueOccurrences) {
        cout << "All elements have unique occurrences." << endl;
    } else {
        cout << "Not all elements have unique occurrences." << endl;
    }
    return 0;
}