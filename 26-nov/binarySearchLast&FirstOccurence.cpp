#include<iostream>
using namespace std;

int binary_search_last_occurence(int arr[],int size, int key){
   int s = 0;
   int e = size-1;
   int ans = -1;
   while(s<=e){
     int mid = s+(e-s)/2;
     if(arr[mid]==key){
        ans = mid;
        s = mid+1;
     }
     else if (arr[mid]<key){
        s = mid+1;
     }
     else{
        e = mid-1;
     }
   }
   return ans;
}
int binary_search_first_occurence(int arr[],int size, int key){
   int s = 0;
   int e = size-1;
   int ans = -1;
   while(s<=e){
     int mid = s+(e-s)/2;
     if(arr[mid]==key){
        ans = mid;
        e = mid-1;
     }
     else if (arr[mid]<key){
        s = mid+1;
     }
     else{
        e = mid-1;
     }
   }
   return ans;
}

int main(){
  int arr[16] = {1,1,1,2,2,2,2,2,3,3,3,3,4,5,5,6};
  cout<<"first occurence "
  <<binary_search_first_occurence(arr,16,3)
  <<endl<<"last occurence "
  <<binary_search_last_occurence(arr,16,3)<<endl;
  cout<<"total number of 3 is = "<<(binary_search_last_occurence(arr,16,3)-binary_search_first_occurence(arr,16,3))+1<<endl;
}