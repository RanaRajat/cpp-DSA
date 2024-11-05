#include<iostream>
using namespace std;

int main(){
    int s = 0;
    int e = 10;
    int mid = s+ (e-s)/2;
    int arr[11] = {1,2,3,4,5,6,4,3,2,1,0};
    while(s<e){
       if(arr[mid]<arr[mid+1]){
        s = mid+1;
       }
       else{
        e = mid;
       }
       mid = s+ (e-s)/2;
    }
    cout<<arr[s]<<" ----"<<endl;
}