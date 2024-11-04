#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int element) {
    int start = 0;
    int end = size - 1;
    int mid;
    int ans = -1;
    
    while (start <= end) {
        mid = start + (end - start) / 2;
        
        if (arr[mid] == element) {
            ans = mid;
            end = mid - 1; // Move left to find the first occurrence
        } else if (arr[mid] > element) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int lastOccurence(int arr[], int size, int element) {
    int start = 0;
    int end = size - 1;
    int mid;
    int ans = -1;
    
    while (start <= end) {
        mid = start + (end - start) / 2;
        
        if (arr[mid] == element) {
            ans = mid;
            start = mid + 1; // Move right to find the last occurrence
        } else if (arr[mid] > element) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    cout << "Running" << endl;
    int arr[12] = {1, 2, 3, 4, 5, 5, 5, 5, 5, 6, 7, 8};
    cout << "First occurrence: " << firstOccurence(arr, 12, 5) << endl;
    cout << "Last occurrence: " << lastOccurence(arr, 12, 5) << endl;

    return 0;
}
