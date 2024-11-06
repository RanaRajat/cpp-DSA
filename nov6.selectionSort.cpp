#include<iostream>
using namespace std;

int selection_sort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        int smallest = i;
        for(int j =i+1;j<n;j++){
            if(arr[smallest]>arr[j]){
                smallest = j;
            }
        }
        swap(arr[i],arr[smallest]);
    }
    return 1;
}

int main(){
    int arr[9] = {5,3,4,61,7,9,0,1,8};
    selection_sort(arr,9);
    cout<<"sorted Array "<<endl;
    for(int i =0;i<9;i++){
        cout<<arr[i]<<endl;
    }
}