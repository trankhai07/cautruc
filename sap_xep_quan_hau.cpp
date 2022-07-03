#include<bits/stdc++.h>
using namespace std;
int h[11],c[11],nguoc[22],xuoi[22];
int n,re=0,a[11],val[10][10];
void output(){
    for(int i = 1;i <= 8;i ++){
        for(int j =1;j <= 8;j ++){
            cin >> val[i][j];
        }
    }
    n= 8;
    for(int i =0;i < 11;i ++){
        h[i]=c[i]=0;
    }
    for(int i = 0;i < 22;i ++) nguoc[i]=xuoi[i] =0;
    re =0;
}
void quay(int j){
    for(int i = 1;i <= n;i ++){
        if(h[i] != 1 && c[i] != 1 && nguoc[j+i-1] != 1&& xuoi[j-i+n] != 1){
            a[j] =i;
            h[i]=c[i] =nguoc[j+i-1] =xuoi[j-i+n] = 1;
            if(j == n){
               int k =0;
               for(int l =1;l <= 8;l ++) k+=val[l][a[l]];
               re=max(re,k);
            }
            else quay(j+1);
            h[i]=c[i]=nguoc[i+j-1]=xuoi[j-i+n] =0;
        }
    }
}
int main(){
   int t; cin >> t;
   int q =0;
   while(t--){
       q++;
       output();
       quay(1);
       cout <<"Test " <<q<<": "<<re<<endl;
   }
}