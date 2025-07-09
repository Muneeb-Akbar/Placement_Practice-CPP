#include<iostream>
using namespace std;



int binarySearch(int arr[], int size, int key) {
  int start = 0 ; 
  int end = size - 1;

  while(start <= end){
    int mid = (start + end)/2;
    if(arr[mid] == key){
        return mid;
        }
        else if(arr[mid] < key){
        start = mid + 1;
        }
        else{
        end = mid - 1;
    }

  }
  return -1; // Element not found
}

int main(){

    int arr[] = {5,16,23,42,56,78,89};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    
    int result = binarySearch(arr, size, key);
    
    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;

}