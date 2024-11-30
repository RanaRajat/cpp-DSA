#include<iostream>
using namespace std;

void removeSubStr(string str,string str2){
   str.erase(str.find(str2),str2.length());
   cout<<str;
}
int main(){
  string str;
  cin>>str;
  removeSubStr(str,"abc");
//   cout<<endl<<str;
}