#include<iostream>
using namespace std;

int reverseArray(int arr[],int n){

  int s = 0;
  int e = n-1;

  while(s<=e){
    swap(arr[s],arr[e]);
    s++;
    e--;
  }
  return 1;
}

int main(){
  int arr[10] = {3,5,6,7,8,9,10,11,12,13};
  reverseArray(arr,10);
  for(int i =0;i<10;i++){
    cout<<arr[i]<<" ";
  }
}