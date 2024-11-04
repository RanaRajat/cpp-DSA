#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int element){
      int start = 0;
      int end = size-1;
      int mid = start + (end-start)/2;

      while(start<=end){
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]>element){
             end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start +(end-start)/2;
      }
      return -1;
}

int main(){

int arr[6] = {4,6,7,80,98,102};
int res = binarySearch(arr,6,80);
cout<<"   ----index"<<binarySearch(arr,6,102);
}