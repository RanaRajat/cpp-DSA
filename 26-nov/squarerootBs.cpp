#include<iostream>
using namespace std;


int findSquareRoot(int n){

    int s = 1;
    int e = n;
    int ans = -1;
    while(s<=e){
        int mid = s+ (e-s)/2;
        int square = mid * mid;
        if(square==n){
            return mid;
        }
        else if(square>n){
           e = mid-1;
        }
        else{
            s = mid+1;
            ans = mid;
        }
    }
   return ans;
}

void precesion(int precesion,int value, int n){
    double decimalVal = 1;
    double ans = value;
  for(int i =1;i<=precesion;i++){
    decimalVal = decimalVal/10;
    cout<<decimalVal<<endl;
    for(double j = ans;j*j<n;j=j+decimalVal){
        ans = j;
    }
  }
   cout<<ans;
}

int main(){
  int n;
  cin>>n;
  cout<<findSquareRoot(n)<<endl;
  precesion(4,findSquareRoot(n),n);
}