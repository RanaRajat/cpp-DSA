#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 1;
     cout<<a<<endl<<b<<endl;
    for(int i =1;i<=10;i++){
      int nextNumber = a+b;
      cout<<nextNumber<<endl;
      a = b;
      b = nextNumber;
    }
}
