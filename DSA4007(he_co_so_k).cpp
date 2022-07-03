#include<bits/stdc++.h>
using namespace std;
void output(string s1,string s2,int n){
    int len1= s1.size();
    int len2 = s2.size();
    if(len1 < len2){
      for(int i =0;i < len2-len1;i ++ ){
          s1 = ('0'+s1);
      }
    }
    else{
        for(int i =0;i < len1-len2;i ++ ){
          s2 = ('0'+s2);
      }
    }
    int nho=0,so;
    string kq="";
    for(int i = s1.size()-1;i >= 0;i--){
        so = s1[i]-'0'+s2[i]-'0'+ nho;
        kq = ( char(so%n+'0')+ kq);
        nho=so/n;
    }
    if(nho == 1) {
        cout <<"1"<<kq<<endl;
    }
    else cout <<kq<<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        string s1,s2;
        cin >>n >>  s1 >> s2;
        output(s1,s2,n);
    }
    return 0;
}