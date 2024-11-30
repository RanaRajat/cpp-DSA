#include<iostream>
using namespace std;

int merge(int arr1[], int arr2[], int m, int n, int arr3[]){

   int i = 0;
   int j = 0;
   int k = 0;

   while(i<m&&j<n){
     if(arr1[i]<arr2[j]){
        arr3[k] = arr1[i];
        i++;
        k++;
     }
     else{
         arr3[k] = arr2[j];
        j++;
        k++;
     }
   }
   while(i<m){
    arr3[k] = arr1[i];
    i++;
    k++;
   }
   while(j<n){
    arr3[k] = arr2[j];
    j++;
    k++;
   }

return 0;
}

int main(){
   int arr1[5]={2,4,6,8,10};
   int arr2[4]={1,3,5,7};
   int arr3[9];

   merge(arr1,arr2,5,4,arr3);

   for(int i =0;i<9;i++){
    cout<<arr3[i]<<" ";
   }
}