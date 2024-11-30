#include<iostream>
using namespace std;

int add(int arr1[], int arr2[], int m , int n, int arr3[]){
       int i = m-1;
       int j = n-1;
       int k = m-1;
       int carry = 0;
       while(i>=0&&j>=0){
        int sum = arr1[i--]+arr2[j--] + carry;
        int digit = sum %10;
        carry = sum/10;
        arr3[k--] = digit;
       }
       while(i>=0){
         int sum = arr1[i--]+ carry;
        int digit = sum %10;
        carry = sum/10;
        arr3[k--] = digit;
       }
        while(j>=0){
        int sum = arr2[j--]+ carry;
        int digit = sum %10;
        carry = sum/10;
        arr3[k--] = digit;
       }
       return 1;
}

int main(){
   int arr1[10] = {1,2,3,4,5,6,7,8,9,9};
   int arr2[6] =          {5,7,8,0,1,2};
   int arr3[10];
   add(arr1,arr2,10,6,arr3);
   for(int i =0;i<10;i++){
    cout<<arr3[i]<<" ";
   }
}