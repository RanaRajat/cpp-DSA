#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
void findUnique(int arr[],int size){
    int uniqueElement = 0;
    for(int i =0;i<size;i++){
        uniqueElement = uniqueElement^arr[i];
    }
    cout<<uniqueElement<<"---unique element"<<endl;
}
//seprate 00 and 1's
void sort0And1(int arr[],int size){
   int start = 0;
   int end = size-1;

   while(start<=end){

    while(arr[start]==0&&start<=end){
        start++;
    }
    while(arr[end]==1&&start<=end){
        end--;
    }
    if(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
   }
   printArray(arr,size);
}

//only works in case of sinle elements with no other duplicated and no missing numbers
void oneDuplicateElement(int arr[],int size){
    int oneDuplicateElement = 0;
    for(int i =0;i<size;i++){
        oneDuplicateElement = oneDuplicateElement^arr[i];
    }
     for(int i =1;i<size;i++){
        oneDuplicateElement = oneDuplicateElement^i;
    }
    cout<<oneDuplicateElement<<"---duplicate element";
}
//find number of occurences and if number of occurences is unique return true else return false


int main(){
    int arr1[13] = {1,1,2,2,3,3,41,41,5,6,6,7,7};
    int arr2[8] = {1,1,2,3,4,5,6,7};
    int arr[10] = {0,0,1,1,0,0,1,1,0,0};
    // findUnique(arr1,13);
    // oneDuplicateElement(arr2,8);
    //printArray(arr1,13);
    sort0And1(arr,10);
}