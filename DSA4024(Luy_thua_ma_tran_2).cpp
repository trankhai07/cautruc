#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
struct MaTran
{
    long long c[15][15];
};
int n,k;
MaTran operator*(MaTran a,MaTran b){
    MaTran re;
    for(int i = 0;i < n;i ++ ){
        for(int j = 0;j < n;j ++){
            re.c[i][j] =0;
            for(int k =0;k < n;k ++ ){
                re.c[i][j] = (re.c[i][j] + a.c[i][k]*b.c[k][j])%mod;
            }
        }
    }
    return re;
}
MaTran mu(MaTran a,long long m)
{
    if(m == 1) return a;
    MaTran p = mu(a,m/2);
    if(m%2 == 0) return p*p;
     return a*p*p;
}
int main(){
    int x; cin >> x;
while(x--){
    cin >> n >> k;
    MaTran a;
    for(int i = 0;i < n;i ++ ){
       for(int j =0;j < n;j ++ ){
           cin >> a.c[i][j];
       }
    }
    MaTran kq = mu(a,k);
    long long sum =0;
    for(int i = 0;i < n;i ++ ){
        sum =(sum%mod + kq.c[i][n-1] %mod)%mod;
    }
    cout <<sum <<endl;
}
}