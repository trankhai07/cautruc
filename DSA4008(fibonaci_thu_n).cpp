#include <bits/stdc++.h>
using namespace std;
const long long base = 1000000007;     //   (0 1)^T      (F(t))
                                       //   (1 1)     = (F(t+1))
struct MaTran{
  long long c[2][2];
};
MaTran operator*(MaTran a,MaTran b){
    MaTran res;
    for(int i = 0;i <= 1;i ++ ){
        for(int j = 0;j <= 1;j ++){
            res.c[i][j] =0;
            for(int k =0;k <= 1;k ++){
                res.c[i][j] = (res.c[i][j] + a.c[i][k] *b.c[k][j])%base;
            }
        }
    }
    return res;
}
MaTran Mu(MaTran a,long long  n){
   if(n == 1) return a;
   MaTran p = Mu(a,n/2);
   if(n%2 == 0) return p*p;
    return a*p*p;
}
int main(){
    int x; cin >> x;
    while(x--){
    MaTran a; a.c[0][0]=1;a.c[0][1]=1;a.c[1][0]=1;a.c[1][1]=0;
    long long n;
    cin >> n;
    MaTran kq = Mu(a,n);
    cout << kq.c[1][0] <<endl;
    }
    return 0;
}