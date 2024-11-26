#include<iostream>
using namespace std;

int findingPeak(int arr[], int size){
    int s = 0;
    int e = size -1;
    int mid = s + (e-s)/2;
  while(s<e){
     mid = s + (e-s)/2;
    if(arr[mid]<arr[mid+1]){
        s = mid+1;
    }
    else{
        e = mid;
    }
  }
  return mid;
}


int main(){

  int arr[10] = {0,1,2,3,4,5,4,3,2,1};
  int res = findingPeak(arr,10);
  cout<<res;

}