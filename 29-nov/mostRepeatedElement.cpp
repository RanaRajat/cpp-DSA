#include<iostream>
using namespace std;

char checkMostRepeated(string str){
   int arr[26] = {0};
   string str2 = "abcdefghijklmnopqrstuvwxyz";
   for(int i =0;i<str.length();i++){
    int ch = str[i]-'a';
    arr[ch]++;
   }
   int maxi= 0;
   for(int i =0;i<26;i++){
     if (arr[i] > arr[maxi]) {
            maxi = i;
        }
   }
   return str2[maxi];
}
int main(){
   string str;
   cin>>str;
   char result = checkMostRepeated(str);
   cout<<result<<endl;

}