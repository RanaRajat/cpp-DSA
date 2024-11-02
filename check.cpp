#include<iostream>
using namespace std;

int main(){
    // for(int i =0;i<=5;i++){
    //     cout<<i<<" ";
    //     i++;
    // }
    //  for(int i =0;i<=5;i--){
    //     cout<<i<<" ";
    //     i++;
    // }
    //subtract product and sum of digits of a given number
    int n;
    cin>>n;
    int product = 1;
    int sum = 0;
    while(n>0){
       int rem = n%10;
       product = product * rem;
       sum = sum + rem;
       n = n/10;
    }
    cout<<product - sum<<" product- sum";
}
