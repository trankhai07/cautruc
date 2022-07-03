#include<bits/stdc++.h>
using namespace std;
string s1="",s2="";
int check1(int x,int n){
    int t = n;
    if(n == 0 || x == 0) return 0;
   int sum=0;
    for(int i = 1;i <= x;i ++ ){
        if(n > 9){
            n-=9;
            s1+='9';sum+=9;
        }
        else {
            s1+=(n+48); sum+=n;
            n-=n;
        }
    }
    if(s1.size() != x || sum != t ) return 0;
     return 1;
}
int check2(int x,int n){
    int t = n;
    if(n == 0 || x == 0) return 0;
   int sum=0;
    for(int i = 1;i <= x;i ++ ){
        if(n > 9){
            n-=9;
            s2+='9';sum+=9;
        }
        else {
            s2+=(n+48); sum+=n;
            n-=n;
        }
    }
    if(s2.size() != x || sum != t ) return 0;
    reverse(s2.begin(),s2.end());
    if(s2[0] == '0'){
        s2[0]='1';
        for(int i = 1;i < s2.size();i ++){
           if(s2[i] != '0'){
               s2[i] = (s2[i]-1);
               break;
           }
        }
    }
     return 1;
}
int main(){
    int x,n;
    cin >> x >> n ;
    if(check1(x,n) && check2(x,n)) cout << s2 << " " <<s1 ;
   // if(check1(x,n)) cout << s1 << endl;
    else cout <<"-1 -1\n";
    return 0;
}