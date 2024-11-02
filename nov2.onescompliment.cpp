#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //n=00000110101
    cout<<~n;
    int m = n;
    int mask = 0;
    while(m!=0){
        m = m>>1;
        mask = (mask<<1)|1;
    }
    int res = (~n)&1;
    cout<<res;
}