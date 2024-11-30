#include<iostream>
using namespace std;

bool isPossible(int mid, int arr[], int n,int arrSize){
  int studentCount = 1;
  int pageSum = 0;
  for(int i =0;i<arrSize;i++){
     if(pageSum+arr[i]<=mid){
        pageSum = pageSum+arr[i];
     }
     else{
        studentCount++;
        if(studentCount>n||arr[i]>mid){
            return false;
        }
        pageSum = arr[i];
     }

  }
 return true;
}

int main(){
    int arr[4] = {10,20,30,40};
     int s = 0;
     int e = 0;
     int n = 2;
     int mid = -1;
     int ans = -1;
    for(int i =0;i<4;i++){
        e = e+ arr[i];
    }
    e = e -1;

    while(s<=e){
       mid = s + (e-s)/2;
        
        if(isPossible(mid,arr,n,4)){
            ans = mid;
              e = mid-1;
        }
        else{
              s = mid+1;
        }
    }
   cout<<ans;
}