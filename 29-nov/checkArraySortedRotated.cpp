#include<iostream>
using namespace std;

int checkSortedRotated(int arr[],int n){
    int count = 0;
   for(int i =1;i<n;i++){
      if(arr[i-1]>arr[i]){
        count++;
      }
   }
   return count<=0;
}

int main(){
   int arr[7] = {5 6 7 1 2 3 4};
   checkSortedRotated(arr,7);
}