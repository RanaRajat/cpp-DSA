#include<iostream>
using namespace std;


void insertion_sort(int arr[],int n){
   int j = 0;
  for(int i =1;i<n;i++){
    int current = arr[i];
    j = i-1;
    while(j>=0&&arr[j]>current){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = current;
  }
  
}
int main(){
   int arr[9] = {5,6,7,4,3,21,1,0,9};
   insertion_sort(arr,9);
   for(int i =0;i<9;i++){
    cout<<arr[i]<<" ";
   }
}