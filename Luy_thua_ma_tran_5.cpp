#include<bits/stdc++.h>
using namespace std;
struct Matran{
  long long c[15][15];
};
typedef struct Matran matran;
int n,m;
int mod = 1000000007;
matran operator*( matran x,matran y){
   matran z;
   for(int i = 1;i <= n;i ++){
       for(int j =1;j <= n;j ++){
            z.c[i][j]=0;
           for(int l =1;l <= n; l++ ){
               z.c[i][j]= (z.c[i][j] + x.c[i][l]*y.c[l][j])%mod;
           }
       }
   }
   return z;
}
matran mu(matran a,int m){
    if(m == 1) return a;
    matran kq = mu(a,m/2);
    if(m % 2 == 0) return kq*kq;
     return a*kq*kq;
}
int main(){
    int x; cin>> x;
    while(x--){
      matran a;
      cin >> n >> m;
      for(int i = 1;i <= n; i++){
          for(int j = 1;j <= n;j ++){
              cin >> a.c[i][j];
          }
      }
      long long sum=0;
      matran kq = mu(a,m);
      for(int i = 1;i <= n;i ++){
          sum = (sum % mod + kq.c[n][i]%mod)%mod;
      }
      cout << sum <<endl;
    }
}