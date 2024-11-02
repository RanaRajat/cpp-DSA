#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // for(int i =0;i<31;i++){
    //     int res = pow(2,i);
    //     if(res==n){
    //         cout<<"is power of 2";
    //         break;
    //     }
    // }

    int res = n>0&&(n&n-1)==0;
    cout<<res;
}
