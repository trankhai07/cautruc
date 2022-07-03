#include<bits/stdc++.h>
using namespace std;
void output(int a[],char s[],int n){
    int kt = 0;
   for(int i =2 ;i < n;i ++){
       if(s[a[i]-1] == 'A' || s[a[i]-1] == 'E'){
           if(s[a[i-1]-1] != 'A' && s[a[i-1]-1] != 'E' && s[a[i+1]-1] != 'A' && s[a[i+1]-1] != 'E'){
               kt = 1;
               return ;
           }
       }
   }
    if(kt == 0){
        for(int i = 1;i <= n;i ++ ) cout << s[a[i]-1];
        cout << endl;
    }
}
void quay_lui(int a[],int b[],char s[],int n,int j){
 for(int i = 1;i <= n;i ++ ){
  if(b[i] != 0){
      a[j]=i;
      b[i]= 0;
      if(j == n) output(a,s,n);
      else quay_lui(a,b,s,n,j+1);
      b[i] = 1;
  }
 }
}
int main(){
    char s[]={'A','B','C','D','E','F','G','H'};
    char x;
    cin >> x;
    int n = x-64;
    int a[n+1],b[n+1];
    for(int i = 1;i <= n; i++ ) {
        a[i]=i;
        b[i]=1;
    }
    quay_lui(a,b,s,n,1);
}