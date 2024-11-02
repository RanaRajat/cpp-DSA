//hamming weight

#include<iostream>
using namespace std;

//return number of 1 bits of a given number
int main(){
//000011101010
int n;
cin>>n;
int x = n;
int count = 0;
while(x!=0){
   if((x&1)==1){
    count++;
   }
   x = x>>1;
}
cout<<count;
}