#include<iostream>
using namespace std;

int compare(string str1,string str2){
    cout<<str1<<"-----"<<endl;
    return (str1==str2)? 1:0;
}

// string findString(string str,string subStr){
//    int pos = str.find(subStr);
//    cout<<"at position = "<<pos;
//    return pos>0?"exists":"not exists";
// }
void findStringManually(string str, string subStr){
    int strLen = str.length();
    int subStrLen = subStr.length();
    int n = strLen - subStrLen;
    for(int i =0;i<=n;i++){
        string newStr = "";
        for(int j =i;j<i+subStrLen;j++){
            newStr = newStr+str[j];
        }
        if(compare(newStr,subStr)){
            cout<<"exists";
            return;
        }
        else{
            cout<<"not exists"<<endl;
        }
    }
}
int main(){
  string str;
  cin>>str;
  string subStr = "rtk";
   findStringManually(str,subStr);
 }