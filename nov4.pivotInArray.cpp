#include<iostream>
using namespace std;

int main(){
    //finding pivot element

    int arr[7] = {1,2,3,4,3,2,1};
    int s = 0;
    int e = 6;
    int mid = s + (e-s)/2;

    while(s<e){
    if(arr[s]<arr[mid]){
        s = mid+1;
    }
    else{
        e = mid;
    }
    mid = s+(e-s)/2;
    }
    cout<<s;
}