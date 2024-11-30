#include<iostream>
using namespace std;

bool isPossible(int mid, int arr[], int n,int arrSize){
  int cowCount = 1;
  int pageSum = 0;
  int lastPos = arr[0];
  for(int i =0;i<arrSize;i++){
     if(arr[i]-lastPos>=mid){
        cowCount++;
        if(cowCount==n){
            return true;
        }
        lastPos = arr[i];
     }
  }
 return false;
}

int main(){
    //vector should be sorted but here i am using sorted array only
    // int arr[5] = {4,2,1,3,6};
     int arr[5] = {1,2,3,4,6};
     int s = 0;
     int e = -1;
     int n = 2;
     int mid = -1;
     int ans = -1;
    e = arr[4];

    while(s<=e){
       mid = s + (e-s)/2;
        
        if(isPossible(mid,arr,n,5)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
   cout<<ans;
}