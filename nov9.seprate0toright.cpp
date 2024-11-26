//seprate all non zeroes values to left and zeroes to right

#include<iostream>
using namespace std;

int main(){
    int arr[10] = {0,9,8,7,0,4,0,1,1,0};
    int j = 0;
    for(int i =0;i<10;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j++]);
        }  
    }
    for(int i =0;i<10;i++){
        cout<<arr[i]<<"  ";
    }
}