#include<iostream>
using namespace std;

int check(string str1, string str2){
    int arr[26] = {0};
    int arr2[26] = {0};
    for(int i =0;i<str1.length();i++){
        int ch = str1[i] - 'a';
        arr[ch]++;
    }
     for(int i =0;i<str2.length();i++){
        int ch = str2[i] - 'a';
        arr2[ch]++;
    }
    for(int i =0;i<26;i++){
        if(arr[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
   
}
int checkPermutation(string str,string str2){
    for(int i =0;i<str.length()-1;i++){
        string newStr = "";
        for(int j = i;j<i+str2.length();j++){
             newStr = newStr + str[j];
        }
        if(check(str2,newStr)){
            return 1;
        }
    }
    return 0;
}
int main(){
  string str;
  cin>>str;
  cout<<checkPermutation(str,"abc");
}