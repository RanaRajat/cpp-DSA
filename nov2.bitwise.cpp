#include<iostream>
using namespace std;

int main(){
    int a,b =1;
     a = 10;
    cout<<a<<b;
    if(++a){
        cout<<"b "<<b;
    }
    else{
        cout<<"++b "<<++b;
    }
}
