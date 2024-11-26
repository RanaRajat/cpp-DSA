#include<iostream>
using namespace std;


int pivot(int arr[], int size){
   
   int s = 0;
   int e = size-1;
   int mid = -1;
   while(s<e){
     mid = s+ (e-s)/2;
    if(arr[0]<=arr[mid]){
        s = mid+1;
    }
    else{
        e = mid;
    }
   }
   return mid;

}

int main(){
 
  int arr[10] = {7,8,9,10,1,2,3,4,5,6};

  int res = pivot(arr,10);
  cout<<res<<endl;

}