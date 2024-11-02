#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
     int rem = 0;
     int ans = 0;
     int i = 0;
    while(n!=0){
      rem = n&1;
      ans = rem*pow(10,i) +ans;
      i++;
      n = n>>1;
    }
    cout<<ans;
}