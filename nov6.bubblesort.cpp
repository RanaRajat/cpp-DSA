#include<iostream>
using namespace std;

int bubble_sort(int arr[], int size){
    for(int i =0;i<size;i++){
        for(int j = 0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return 1;
}

int main(){
    int arr[9] = {5,3,4,61,7,9,0,1,8};
    bubble_sort(arr,9);
    cout<<"bubble sort "<<endl;
    for(int i =0;i<9;i++){
        cout<<arr[i]<<endl;
    }
}