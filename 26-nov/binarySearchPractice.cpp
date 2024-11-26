#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
  int s = 0;
  int e = size-1;
  while(s<=e){
   int mid = s + (e - s) / 2;
   if(arr[mid]==key){
    return mid;
   }
   else if(key>arr[mid]){
     s= s+1;
   }
   else {
     e = mid-1;
   }
  }
  return -1;
}

int main(){
 int arr[7] = {10,20,45,56,77,100,200};
 int key;
 cout<<endl;
 cout<<"enter the value of key ";
 cin>>key;
 cout<<endl;
 int resIndex = binarySearch(arr,7,key);
 cout<<resIndex<<" this is the result"<<endl;
}