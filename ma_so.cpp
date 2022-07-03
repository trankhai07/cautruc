#include<bits/stdc++.h>
using namespace std;
 vector<string>v;
 int a[100],b[100];
string s;
 void output(int a[],int n){
     string s1="";
     for(int i = 1;i <= n;i ++){
         s1+=s[a[i]-1];
     } 
     v.push_back(s1);
 }
 void sinh(int a[],int b[],int j,int n){
     for(int i = 1;i <= n;i ++ ){
         if(b[i] == 0){
             a[j] = i;
             b[i]=1;
             if(j == n) output(a,n);
             else sinh(a,b,j+1,n);
             b[i]=0;
         }
     }
 }
 void output2(int a[],int x,int d){
    cout << v[d];
    for(int i =1;i <= x;i ++) cout << a[i];
    cout << endl;
 }
 void creat(int j,int x,int d){
     for(int i = 1;i <= x; i++){
         a[j]=i;
         if(j == x) output2(a,x,d);
         else creat(j+1,x,d);
     }
 }
int main(){
    int x; cin >> x;
    memset(b,0,sizeof(b));
    for(int i = 1;i <= x; i++) a[i]=i;
    for(int i = 0;i < x;i ++)
         s += char(i+'A');
    //   v.push_back(s);
     /* while(next_permutation(s.begin(),s.end())) v.push_back(s); // hàm sinh hoán vị*/
      sinh(a,b,1,x);
      memset(b,0,sizeof(b)); 
      for(int i = 0; i < v.size();i ++){
          creat(1,x,i);
      }
}