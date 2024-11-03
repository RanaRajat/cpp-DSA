#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[3],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int maxElement(int arr[3],int size){
    int maxim = INT_MIN;
    for(int i =0;i<size;i++){
        if(arr[i]>maxim){
            maxim = arr[i];
        }
    }
    cout<<"maximum element is ="<<maxim;
    return maxim;
}

int minElement(int arr[3],int size){
     int minimum = INT_MAX;
    for(int i =0;i<size;i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }
    cout<<"minimum element is ="<<minimum;
    return minimum;
}

int reverseArray(int arr[],int size){
    int start = 0;
    int end = size-1;
   while(end>=start){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
   return 1;
}

int main(){
    int arr[10];
    int arr1[10] = {20,23,43,46,89,91,300,1,3,4};
    // fill(arr+1,arr+7,7);
    // cout<<arr[9]<<" "<<arr[6]<<" "<<arr[0];
    // printArray(arr,10);
    // maxElement(arr1,10);
    // minElement(arr1,10);
    reverseArray(arr1,10);
    printArray(arr1,10);
}