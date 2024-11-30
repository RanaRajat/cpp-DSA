#include<iostream>
using namespace std;

char toLowerCase(char ch){
   if(ch>='a'&&ch<='z'){
    return ch;
   }else{
    char temp = (ch - 'A')+'a';
    return temp;
   }
}

int getLength(char ch[]){
    int count = 0;
    for(int i =0;i<=ch[i]!=0;i++){
        count++;
    }
    return count;
}

int reverseString(char ch[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(ch[s++],ch[e--]);
    }
    return 1;
}

int main(){
    char ch[7];
    cin>>ch;
    cout<<ch<<endl;
    cout<<ch[3]<<endl;
    cout<<sizeof(ch)/sizeof(char)<<endl;
    cout<<ch[5]<<endl;
    cout<<"lenth of char array = "<<getLength(ch);
    reverseString(ch,getLength(ch));
    cout<<endl;
    for(int i =0;i<getLength(ch);i++){
        cout<<ch[i];
    }
    cout<<endl<<toLowerCase('G')<<endl;
    char chr[5] = {'a','b','c'};
    cout<<chr;

    //difference char array and string
    string abc;
    cout<<"enter string";
    cin>>abc;
    cout<<abc;

}