#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){

  for(int i =1;i<n;i++){

    int current = arr[i];
    int j = i-1;
    while(j>=0&&arr[j]>current){
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = current;
  }

}

int main(){
    int arr[10] = {5,4,3,21,1,61,0,9,8,6};
    insertion_sort(arr,10);
    for(int i =0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}