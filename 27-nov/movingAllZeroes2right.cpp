#include<iostream>
using namespace std;

int moveZeroes2right(int arr[], int n){
   int nonZero = 0;
   for(int i =0;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[nonZero]);
        nonZero++;
    }
   }
    return 0;
}

int main(){
  int arr[6] = {1,0,2,0,0,3};
  moveZeroes2right(arr,6);
  for(int i =0;i<6;i++){
    cout<<arr[i]<<" ";
  }
}