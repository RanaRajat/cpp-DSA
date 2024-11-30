#include<iostream>
using namespace std;

void rotateArray(int arr[], int n , int k,int arr1[]){
   for(int i =0;i<n;i++){
    arr1[(i+k)%n] = arr[i];
   }
}

int main(){
  int arr[7] = {1,2,3,4,5,6,7};
  int arr1[7];
  rotateArray(arr,7,3,arr1);
  for(int i =0;i<7;i++){
    cout<<arr1[i]<<" ";
  }
}